class MyStack {
    queue<int>m;
    queue<int>t;
public:
    MyStack() {
        m;
        t;
    }
    
    void push(int x) {
        if(m.empty() && t.empty()){
            m.push(x);
        }
        else{
            while(!m.empty()){
                int temp = m.front();
                t.push(temp);
                m.pop();
            }
            m.push(x);
            while(!t.empty()){
                int temp = t.front();
                m.push(temp);
                t.pop();
            }
        }
    }
    
    int pop() {
        int temp = m.front();
        m.pop();
        return temp;
    }
    
    int top() {
        return m.front();
    }
    
    bool empty() {
        if(m.empty() == t.empty()) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */