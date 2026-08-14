// Pushed: 2026-08-14 20:54:53 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 10 MB

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false; 
        }

        std::unordered_map<char, int> t_Map; 
        std::unordered_map<char, int> s_Map; 

        for(int i=0; i<s.size(); i++) {
            t_Map[t[i]]++; 
            s_Map[s[i]]++; 
        }

        return t_Map == s_Map;
    }
};