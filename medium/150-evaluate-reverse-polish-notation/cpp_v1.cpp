// Pushed: 2026-10-18 21:59:04 UTC
// Difficulty: Medium
// Runtime: 4 ms
// Memory: 16.9 MB

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // stack that will only hold numbers 
        stack<int> stack; 
        
        for(string s: tokens) {
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