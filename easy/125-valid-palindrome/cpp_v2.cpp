// Pushed: 2026-08-31 18:49:16 UTC
// Difficulty: Easy
// Runtime: 3 ms
// Memory: 10.5 MB

class Solution {
public:
    bool isPalindrome(string s) {
        string betterS;
        string betterS_rev; 
        int len = s.size(); 

        for(int i=0; i<len; i++) {
            if(std::isalpha(s[i]) || std::isdigit(s[i])) {
                betterS += std::tolower(s[i]); 
            }
            if(std::isalpha(s[len-i-1]) || std::isdigit(s[len-i-1])) {
                betterS_rev += std::tolower(s[len-i-1]); 
            }
        }

        return betterS == betterS_rev; 
    }
};