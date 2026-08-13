class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> solMap; 
        vector<int> sol; 

        for(int i=0; i<nums.size(); i++) {
            int diff = target - nums[i]; 
            if(solMap.contains(diff)) {
                sol = {i, solMap[diff]}; 
                return sol; 
            }
            solMap[nums[i]] = i; 
        }
        return sol; 
    }
};