// Pushed: 2026-10-05 18:18:07 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 14.2 MB

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> myStack; 
        myStack.push(0);

        for(string s: logs) {
            if(s == "./") {
                continue; 
            }
            else if(s == "../") {
                if(myStack.top() == 0) {
                    continue; 
                }
                else {
                    myStack.pop(); 
                }
            }
            else {
                int x = myStack.top() + 1; 
                myStack.push(x); 
            }
        }
        return myStack.top(); 
    }
};