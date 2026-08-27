// Pushed: 2026-08-27 21:51:50 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 14.8 MB

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> solMap; 
        // <num, i>
        vector<int> sol; 

        for(int i=0; i<nums.size(); i++) {
            int diff = target - nums[i]; 
            if(solMap.contains(diff)) {
                sol = {solMap[diff], i}; 
                return sol; 
            }
            solMap[nums[i]] = i; 
        }
        return sol; 
        
    }
};