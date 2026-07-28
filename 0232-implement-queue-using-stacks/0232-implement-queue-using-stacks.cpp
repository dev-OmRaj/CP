class MyQueue {
    stack<int>m;
    stack<int>t;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        m.push(x);
    }
    
    int pop() {
        int temp;
        if(t.empty()){
            while(!m.empty()){
                int temp = m.top();
                t.push(temp);
                m.pop();
            }
        }
        temp = t.top();
        t.pop();
        return temp;
    }
    
    int peek() {
        if(!t.empty()) return t.top();
        if(!m.empty()) {
            while(!m.empty()){
                int temp = m.top();
                m.pop();
                t.push(temp);
            }
        }
        return t.top();
    }
    
    bool empty() {
        return t.empty() && m.empty();
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