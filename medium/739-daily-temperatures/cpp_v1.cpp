// Pushed: 2026-10-20 01:24:32 UTC
// Difficulty: Medium
// Runtime: 11 ms
// Memory: 105.3 MB

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size(); 
        vector<int> out(size, 0); 
        vector<int> res; // vector with indices needing to be resolved

        for(int i=0; i<temperatures.size(); i++) {
            while(!res.empty() && temperatures[res.back()] < temperatures[i]) {
                int prev = res.back(); 
                res.pop_back();
                out[prev] = i - prev; 
            }
            res.push_back(i);
        }   
        return out;         
    }
};