// Pushed: 2026-10-18 00:07:59 UTC
// Difficulty: Medium
// Runtime: 246 ms
// Memory: 151.2 MB

class MinStack {
public:
    stack<int> values;
    stack<int> mins;

    MinStack() {

    }
    
    void push(int value) {
        values.push(value); 
        if(mins.empty() || mins.top() >= value) {
            mins.push(value);
        }
    }
    
    void pop() {
        if(mins.top() == values.top()) {
            mins.pop();
        }
        values.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */