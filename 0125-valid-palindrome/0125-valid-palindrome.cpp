class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(int i=0;i<s.length();i++){
                    char ch = s[i];
        if(ch>=97 && ch<=122 || ch>=48 && ch<=57){
            str.push_back(ch);    
        }
            else if(ch>=65 && ch<=90){
            str.push_back((char)(ch+32));
            }
            else continue;
        }
        int n = str.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
                 i++;
                 j--;     
        }
        return true;    
    }
};