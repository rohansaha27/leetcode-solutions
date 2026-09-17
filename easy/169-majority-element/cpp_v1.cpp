// Pushed: 2026-09-17 00:05:07 UTC
// Difficulty: Easy
// Runtime: 3 ms
// Memory: 42.2 MB

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int lim = floor(nums.size()/2); 
        unordered_map<int, int> numMap; 

        for(int i=0; i<nums.size(); i++) {
                numMap[nums[i]]++; 
                if(numMap[nums[i]] > lim) {
                    return nums[i]; 
                }
            }
            return -1; 
        }
    };