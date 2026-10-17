// Pushed: 2026-10-17 23:40:52 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 8.8 MB

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren; 

        for(char c: s) {
            if(c == '(' || c == '{' || c == '[') {
                paren.push(c); 
            }
            else if(c == ')' && !paren.empty()) {
                if(paren.top() == '(') {
                    paren.pop();
                }
                else {
                    paren.push(c); 
                }
            }
            else if(c == '}' && !paren.empty()) {
                if(paren.top() == '{') {
                    paren.pop();
                }
                else {
                    paren.push(c); 
                }
            }
            else if(c == ']' && !paren.empty()) {
                if(paren.top() == '[') {
                    paren.pop();
                }
                else {
                    paren.push(c); 
                }
            }
            else {
                return false; 
            }
        }
        return paren.empty();
    }
};