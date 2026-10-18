// Pushed: 2026-10-18 00:00:09 UTC
// Difficulty: Medium
// Runtime: 249 ms
// Memory: 164.6 MB

class MinStack {
public:
    vector<int> stack; 
    multiset<int> min; 
    
    MinStack() {
        stack = {}; 
    }
    
    void push(int value) {
        stack.emplace_back(value);
        min.insert(value);
    }
    
    void pop() {
        if(!stack.empty()) {
            min.erase(min.find(stack.back()));
            stack.pop_back(); 
        }
    }
    
    int top() {
        if(!stack.empty()) {
            return stack.back();
        }
        return -99999; 
    }
    
    int getMin() {
        auto it = min.begin();
        int value = *it; 
        return value; 
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