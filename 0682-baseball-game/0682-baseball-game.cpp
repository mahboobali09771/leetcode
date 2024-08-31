class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int>s;
        for(int i=0;i<v.size();i++){
            if(v[i].size()>1 || (v[i].size()==1 && v[i][0]>= '0' && v[i][0]<='9')){
                s.push(stoi(v[i]));
            }
             else if(v[i] == "C") s.pop();
             else if(s.size()>0 && v[i]=="D"){
                    s.push(2 * s.top());
                }
                else if(v[i] == "+") {
                    int v1 = s.top();
                    s.pop();
                    int sum = v1 + s.top();;
                    s.push(v1);
                    s.push(sum);
                }
        }
        int sum = 0;
       while(s.size()>0){
           sum += s.top();
           s.pop();
       }
        return sum;
    }
};