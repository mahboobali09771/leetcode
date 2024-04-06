class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0, j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]!=t[i]) return t[i];
            i++;
            j++;
        }
        return t[i];
        
    }
};