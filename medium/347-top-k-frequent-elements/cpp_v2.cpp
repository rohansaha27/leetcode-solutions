// Pushed: 2026-10-09 21:38:21 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 17.9 MB

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap; 
        for(int n: nums) {
            freqMap[n]++; 
        }

        vector<pair<int,int>> v(freqMap.begin(), freqMap.end());

        sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a.second > b.second;
        });

        vector<int> sol; 
        for(int i = 0; i < k; i++) {
            sol.push_back(v[i].first);
        }
        return sol;
    }
};