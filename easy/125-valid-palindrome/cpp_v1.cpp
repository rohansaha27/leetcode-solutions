// Pushed: 2026-08-31 18:42:08 UTC
// Difficulty: Easy
// Runtime: 3 ms
// Memory: 10.8 MB

class Solution {
public:
    bool isPalindrome(string s) {
        string betterS; 

        for(int i=0; i<s.size(); i++) {
            if(std::isalpha(s[i]) || std::isdigit(s[i])) {
                betterS += std::tolower(s[i]); 
            }
        }

        string temp = betterS; 
        std::reverse(betterS.begin(), betterS.end()); 
        return temp == betterS;
    }
};