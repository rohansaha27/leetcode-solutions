#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, int> counts;
        
        // Step 1: Count occurrences of each number
        for (int num : nums) {
            counts[num]++;
        }
        
        // Step 2: Create buckets where index represents the frequency
        // Vector size is n + 1 to handle maximum possible frequency n
        std::vector<std::vector<int>> buckets(n + 1);
        for (auto& [num, freq] : counts) {
            buckets[freq].push_back(num);
        }
        
        // Step 3: Iterate backwards from highest frequency bucket to lowest
        std::vector<int> result;
        for (int i = n; i >= 0; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};
