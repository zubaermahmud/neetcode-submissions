class MinStack {
public:
    stack<int>a;
    stack<int>v;
    MinStack() {
    }
    
    void push(int val) {
        a.push(val);
        if(v.empty())
            v.push(val);
        else
            v.push(min(v.top(),val));
    }
    
    void pop() {
        a.pop();
        v.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return v.top();
    }
};
