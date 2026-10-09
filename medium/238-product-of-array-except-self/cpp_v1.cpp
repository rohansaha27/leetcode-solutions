// Pushed: 2026-10-09 21:18:07 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 40.3 MB

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> out(size, 1); 
        int prefix = 1, suffix = 1;
        
        for(int i = 0; i<size; i++) {
            out[i] *= prefix;
            prefix *= nums[i];

            out[size-1-i] *= suffix;
            suffix *= nums[size-1-i];
        }
        return out; 
    }
};