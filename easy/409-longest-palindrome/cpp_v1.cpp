// Pushed: 2026-09-17 00:01:48 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 9.4 MB

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charMap; 

        for(int i =0; i<s.size(); i++) {
            charMap[s[i]]++; 
        }
        int len = 0; 

        bool extra = false; 
        for(auto& [key, value]: charMap) {

            if(value != 1 && value % 2 != 0) {
                value -= 1; 
                extra = true; 
            }

            if(value % 2 == 0) {
                len += value; 
            }
            
            else {
                extra = true; 
            }
        }
        
        if(extra) {
            len += 1; 
        }
        
        return len;   
    }
};