class MinStack {
public:
    stack<int> s;   
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int> a;
        a = s;
        int min = INT_MAX;
        while(a.size()>0)
        {
            if(min>a.top())
            {
                min = a.top();
            }
            a.pop();
        }
        return min;
    }
};
