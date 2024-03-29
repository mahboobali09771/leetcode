class Solution {
public:
    int titleToNumber(string str) {
        int n = str.length();
        long long sum = 0;
        long long a = 1;
        for(int i=n-1;i>=0;i--){
        char ch = str[i];
        long long c = (int)ch-64;
        c *= a;
        sum += c;
        a *= 26;
        
        }
        return sum;
        
    }
};