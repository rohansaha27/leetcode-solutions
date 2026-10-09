// Pushed: 2026-10-09 21:46:45 UTC
// Difficulty: Medium
// Runtime: 19 ms
// Memory: 60.4 MB

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int longest = 1; 
        int track = 1;

        if(nums.empty()) {
            return 0; 
        }
        
        for(int i=1; i<nums.size(); i++) {    
            if(nums[i] - nums[i-1] == 1) {
                track++; 
            }
            else if(nums[i] == nums[i-1]) {

            }
            else {
                track = 1; 
            }
            
            if(track > longest) {
                longest = track; 
            } 
        }
        return longest;
    }
};