// Pushed: 2026-10-18 22:00:17 UTC
// Difficulty: Medium
// Runtime: 2 ms
// Memory: 17 MB

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // stack that will only hold numbers 
        stack<int> stack; 
        
        for(const string& s: tokens) {
            if(s == "*") {
                int num1 = stack.top(); 
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                stack.push(num2 * num1);
            }
            else if(s == "-") {
                int num1 = stack.top(); 
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                stack.push(num2 - num1);
            }
            else if(s == "+") {
                int num1 = stack.top(); 
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                stack.push(num2 + num1);
            }
            else if(s == "/") {
                int num1 = stack.top(); 
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                stack.push(num2 / num1);
            }
            else {
                stack.push(stoi(s));
            }
        }
        return stack.top();
    }
};