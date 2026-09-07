// Pushed: 2026-09-07 02:26:24 UTC
// Difficulty: Easy
// Runtime: 3 ms
// Memory: 12 MB

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        std::unordered_map<char, int> mapM; 
        for(int i=0; i<magazine.size(); i++) {
            mapM[magazine[i]]++; 
        }

        for(int i=0; i<ransomNote.size(); i++) {
            if(mapM[ransomNote[i]] == 0) {
                return false; 
            }
            mapM[ransomNote[i]]--; 
        }

        return true; 
    }
};