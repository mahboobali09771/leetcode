class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        for(int i=n-1;i>=0;i--){
            if(carry + digits[i] < 10 ){
                digits[i] += 1;
                return digits;
            }
            else{ // carry + digits[i] == 10
                digits[i] = 0;
            }
        }
        digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;  
    }
};