// Pushed: 2026-09-01 04:03:31 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 10 MB

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sMap; 
        std::unordered_map<char, int> tMap; 

        if(s.size() != t.size()) {
            return false;
        }

        for(int i=0; i<s.size(); i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        return sMap == tMap; 
    }
};