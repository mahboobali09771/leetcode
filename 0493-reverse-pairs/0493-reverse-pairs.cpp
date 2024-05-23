class Solution {
public:
    int inversion(vector<int>&a, vector<int>&b){
    int count = 0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if((long long int)a[i]>(long long int)2*b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>&a, vector<int>&b, vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}

int mergeSort(vector<int>& v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2, n2 = n -n/2;
    vector<int> a(n1), b(n2);
    // copy pasing
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    // magic ka recursion
    count += mergeSort(a);
    count += mergeSort(b);
    // count the inversions
    count += inversion(a,b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
    return count;
}
    int reversePairs(vector<int>& v) {
        int a = mergeSort(v);
        return a;
    }
};