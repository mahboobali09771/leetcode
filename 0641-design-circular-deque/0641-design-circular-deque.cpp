class MyCircularDeque {
public:
    vector<int>a;
    int front = -1, rear = -1;
    int curr = 0;
    int size;
    MyCircularDeque(int k) {
        a.resize(k);
        size = k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        if(front==-1 && rear == -1){
            front = rear = 0;
            a[front] = value;
        }
        
        else if(front==0){
            front = size-1;
            a[front] = value;
        }
        else{
            front = front-1;
            a[front] = value;
        }
        curr++;
        return true;
        
        
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        if(front==-1 && rear == -1){
            front = rear = 0;
            a[rear] = value;
        }
        
        else if(rear==size-1){
            rear = 0;
            a[rear] = value;
        }
        else{
            rear = rear +1;
            a[rear] = value;
        }
        curr++;
        return true;
        
        
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        if(front==size-1) front = 0;
        else front = front + 1;
        curr--;
        return true;
        
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        if(rear == 0) rear = size - 1;
        else rear = rear - 1;
        curr--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return a[front];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return a[rear];
    }
    
    bool isEmpty() {
        return (curr==0);
    }
    
    bool isFull() {
        return (curr == size);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */