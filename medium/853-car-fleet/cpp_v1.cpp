// Pushed: 2026-10-20 21:54:13 UTC
// Difficulty: Medium
// Runtime: 74 ms
// Memory: 116.9 MB

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> timeVec; // storing <pos, time> in the vector 

        int size = position.size();
        for(int i=0; i<size; i++) {
            double time_calc = (double) (target - position[i]) / speed[i];
            timeVec.emplace_back(position[i], time_calc);
        }

        sort(timeVec.rbegin(), timeVec.rend());
        double T = 0;
        int fleets = 0;

        for(int i=0; i<size; i++) {
            if(timeVec[i].second > T) {
                T = timeVec[i].second; 
                fleets++; 
            }
        }

        return fleets;   
    }
};