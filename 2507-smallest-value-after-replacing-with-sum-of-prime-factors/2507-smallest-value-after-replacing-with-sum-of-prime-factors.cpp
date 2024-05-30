class Solution {
public:
    bool isprime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int smallestValue(int n) {
        if(isprime(n)) return n;
        int sum = 0;
        // work
        for(int i=1;i<sqrt(n);i++){ // O(sqrt(n))
            if(n%i==0 && isprime(i)){
                int m = n;
                while(m%i==0){ // O(logn)
                    sum += i;
                    m /= i;
                    
                }
            }
            
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0 && isprime(n/i)){
                int m = n;
                while(m%(n/i)==0){
                    sum += (n/i);
                    m /= (n/i);
                }
            }
        }
        if(sum==4) return 4;
        return smallestValue(sum);
    }
};