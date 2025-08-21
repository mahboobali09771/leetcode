class Solution {
public:
    int partition(vector<int>& arr,int low ,int high){
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j){
            while(arr[i] <= pivot && i<= high-1)  i++;
            while(arr[j] > pivot && j>=low+1) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
   void qs(vector<int>& arr, int low , int high){
     if(low < high){
        int pIdx = partition(arr, low ,high);
        qs(arr,low,pIdx-1);
        qs(arr,pIdx+1,high);
     }     
    }
    vector<int> sortArray(vector<int>& arr) {
        qs(arr,0,arr.size()-1);
        return arr;
    }
};