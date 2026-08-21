class MinStack {
public:
    stack<int> s;   
    stack<int> min;
    
    // int min = INT_MAX;
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int val) {
        if(min.top()>=val)
        {
            min.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        int a = s.top();
        if(min.top() == s.top())
        {
            min.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        // stack<int> a;
        // a = s;
        // int min = INT_MAX;
        // while(a.size()>0)
        // {
        //     if(min>a.top())
        //     {
        //         min = a.top();
        //     }
        //     a.pop();
        // }
        return min.top();
    }
};
