class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){ // flip
            int preAns = kthGrammar(n-1,(k/2));
            if(preAns==0) return 1;
            else return 0;
        }
        else{ // odd // same 
            int preAns = kthGrammar(n-1,((k/2)+1));
            return preAns;
        }
    }
};