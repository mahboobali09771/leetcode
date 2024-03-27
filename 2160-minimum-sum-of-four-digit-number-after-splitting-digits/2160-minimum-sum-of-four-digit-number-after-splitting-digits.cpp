class Solution {
public:
    int minimumSum(int num) {
        int ones = num % 10;
         num /= 10;
        int tens =  num % 10;
        num /= 10;
        int hun = num % 10;
        num /= 10;
        int thou = num % 10;
        num /= 10;
        
        vector<int> arr(4);
         arr[0] = ones;
        arr[1] = tens;
        arr[2] = hun;
        arr[3] = thou;
        
        sort(arr.begin() , arr.end());
        int num1 = arr[0];
        num1 *= 10;
        num1 += arr[2];
        
        int num2 = arr[1];
        num2 *= 10;
        num2 += arr[3];
        
        return num1 + num2;
        
        
    }
};