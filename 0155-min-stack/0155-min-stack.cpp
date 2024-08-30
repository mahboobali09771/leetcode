

// m2  TC O(n) SC O(1)
class MinStack {
public:
    vector<int>v;
    MinStack() { // constructor
        
    }
    
    void push(int val) { // O(1)
        v.push_back(val);
    }
    
    void pop() { // O(1)
        v.pop_back();
    }
    
    int top() { // O(1)
        return v[v.size()-1];
    }
    
    int getMin() { // O(n)
        int mn = v[0];
        for(int i=1;i<v.size();i++){
            mn = min(mn,v[i]);
        }
        return mn;
    }
};


// m3  TC O(1) SC O(n)
/*
class MinStack {
public:
    stack<int>st;
    stack<int>helper;
    MinStack() { // constructor
        
    }
    
    void push(int val) { // O(1)
        st.push(val);
        if(helper.size()==0 || val<helper.top()) helper.push(val);
        else helper.push(helper.top());
    }
    
    void pop() { // O(1)
        st.pop();
        helper.pop();
    }
    
    int top() { // O(1)
        return st.top();
    }
    
    int getMin() { // O(1)
    return helper.top();
    }
};
*/


//m4 brute force method
/*
class MinStack {
public:
    stack<int>st;
    MinStack() { // constructor
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>helper;
        int mn = INT_MAX;
        while(st.size()>0){
            mn = min(mn,st.top());
            helper.push(st.top());
            st.pop();
        }
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return mn;
    }
};
*/

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */