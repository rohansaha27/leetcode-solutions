// Pushed: 2026-10-05 17:22:34 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 17.6 MB

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0; 
        for(string s: operations) {
            if(s == "X++" || s == "++X") {
                val++;
            }
            else if(s == "X--" || s == "--X") {
                val--; 
            }
                
        }
        return val; 
    }
};