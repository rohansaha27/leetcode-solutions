// Pushed: 2026-08-14 04:25:00 UTC
// Difficulty: Medium
// Runtime: 3 ms
// Memory: 20.1 MB

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency of each element
        unordered_map<int, int> counts;
        for (const int num : nums) {
            ++counts[num];
        }
        
        // Step 2: Create buckets where the index represents frequency
        // Max possible frequency is nums.size(), so we need size + 1 buckets
        vector<vector<int>> buckets(nums.size() + 1);
        for (const auto& [num, freq] : counts) {
            buckets[freq].push_back(num);
        }
        
        // Step 3: Iterate from highest frequency bucket down to lowest
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; --i) {
            for (const int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};