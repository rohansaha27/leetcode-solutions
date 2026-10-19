// Pushed: 2026-10-19 18:16:09 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 15.1 MB

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> out; 

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == target) {
                out.push_back(i);
            }
        }
        return out; 
    }
};