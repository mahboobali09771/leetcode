// m1 pop efficient
class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) { // O(n)
        if(st.size()==0){
            st.push(x);
            return;
        } 
        else {
            while(st.size()>0){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
            
        }
    }
     
    int pop() { // O(1)
            int x = st.top();
            st.pop();
        return x;
    }
    
    int peek() { // front // O(1)
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
/*  // m2 push efficient
class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) { // O(1)
        st.push(x);
    }
     
    int pop() { // O(n)
      // remove at the bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        helper.pop();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        
        return x;
    }
    
    int peek() { // front // O(n)
        // retreive at the bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        
        return x;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};
*/

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */