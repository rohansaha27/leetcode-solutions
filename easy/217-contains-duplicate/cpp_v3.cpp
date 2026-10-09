// Pushed: 2026-10-09 20:02:06 UTC
// Difficulty: Easy
// Runtime: 72 ms
// Memory: 111.4 MB

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> duplicateMap; 

        for(int n: nums) {
            duplicateMap[n]++;
            if(duplicateMap[n] > 1) {
                return true; 
            }
        }
        return false;   
    }
};