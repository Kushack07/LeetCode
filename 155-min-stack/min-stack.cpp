class MinStack {
    private:
        int arr[30000];
        int st[30000];
        int x;
        int mini;
public:
    MinStack() {
        x=-1;
        mini=INT_MAX;
    }
    
    void push(int val) {
        x++;
        mini = min(mini,val);
        st[x] = mini;
        arr[x] = val;
    }
    
    void pop() {
        x--;
        if (x==-1) { 
            mini=INT_MAX;return;}
        mini = st[x];
    }
    
    int top() {
        return arr[x];
    }
    
    int getMin() {
        return st[x];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */