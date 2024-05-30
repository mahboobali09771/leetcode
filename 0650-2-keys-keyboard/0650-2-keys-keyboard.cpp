class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return false;
        
    }
    int gd(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return n/i;
        }
        return 1;
    }
    int minSteps(int n) {
       int count = 0;
        while(n>1){ // O(log(n))
            if(isPrime(n)){
                count += n;
                break;
            }
            int hf = gd(n); // O(sqrt(n))
            count += (n/hf);
            n = hf;
        }
        return count;
    }
};

// 2nd method
/*
class Solution {
public:
    int gd(int n){
        for(int i=n/2;i>=1;i--){
            if(n%i==0) return i;
        }
        return 1;
    }
    int minSteps(int n) {
       int count = 0;
        while(n>1){
            int hf = gd(n);
            count += (n/hf);
            n = hf;
        }
        return count;
    }
};
*/