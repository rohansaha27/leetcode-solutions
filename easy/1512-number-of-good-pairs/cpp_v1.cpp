// Pushed: 2026-10-05 18:26:04 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 9.8 MB

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int pairs = 0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};