// Pushed: 2026-08-14 20:51:33 UTC
// Difficulty: Easy
// Runtime: 8 ms
// Memory: 9.7 MB

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end()); 
        return s == t;
    }
};