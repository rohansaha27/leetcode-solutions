// Pushed: 2026-08-31 18:20:37 UTC
// Difficulty: Easy
// Runtime: 74 ms
// Memory: 111.2 MB

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std:unordered_map<int, int> dupMap; 

        for(int i=0; i<nums.size(); i++) {
            if(dupMap.contains(nums[i])) {
                return true;
            }
            dupMap[nums[i]] = i; 
        }

        return false; 
    }
};