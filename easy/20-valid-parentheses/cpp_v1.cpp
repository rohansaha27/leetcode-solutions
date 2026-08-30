// Pushed: 2026-08-30 00:45:14 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.9 MB

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack; 

        for(int i=0; i<s.size(); i++) {
            char c = s[i]; 
            bool empty = stack.empty(); 

            if(c == '(') {
                stack.push(c); 
            }
            else if(c == '{') {
                stack.push(c);
            }
            else if(c == '[') {
                stack.push(c);
            }
            else if(c == ')') {
                if(empty) {
                    stack.push(c);
                }
                else if(stack.top() == '(') {
                    stack.pop();
                }
                else {
                    stack.push(c);
                }
            }
            else if(c == '}') {
                if(empty) {
                    stack.push(c);
                }
                else if(stack.top() == '{') {
                    stack.pop();
                }
                else {
                    stack.push(c);
                }
            }
            else if(c == ']') {
                if(empty) {
                    stack.push(c);
                }
                else if(stack.top() == '[') {
                    stack.pop();
                }
                else {
                    stack.push(c);
                }
            }
        }
        return stack.empty(); 
    }
};