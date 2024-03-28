class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(m>n) return -1;
        for(int i=0;i<n-m+1; i++){
        if(haystack[i]==needle[0]){
            // check
               bool flag = true;   // needle is there
            for(int j=0;j<m;j++){
                if(haystack[j+i]!=needle[j]){
                    flag = false;
                    break;
                }
            }
            if(flag==true) return i;
        }
        }
        return -1;
        
    }
};