class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()<b.length()){
            swap(a,b);
        }
        int m = a.length();
        int n = b.length();
        int i = m-1;
        int j = n-1;
        string ans = "";
          int carry = 0;
        while(j>=0){
            int sum = carry + a[i]-48 + b[j]-48;
            if(sum==0){
            ans.push_back('0');
                carry = 0;
            }
            else if(sum==1){
            ans.push_back('1');
                carry = 0;
            }
            else if(sum==2){
            ans.push_back('0');
                carry = 1;
            }
            else // sum==3
            {
                ans.push_back('1');
                carry = 1;
            }
            i--; 
            j--;
        }
        while(i>=0){
            int sum = carry + a[i]-48;
            if(sum==0){
            ans.push_back('0');
                carry = 0;
            }
            else if(sum==1){
                ans.push_back('1');
                carry = 0;
            }
            else if(sum == 2)
            {
                ans.push_back('0');
                carry = 1;
            }
            else // sum==3
            {
                ans.push_back('1');
                carry = '1';
            }
            i--;
        }
        if(carry == 1) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};