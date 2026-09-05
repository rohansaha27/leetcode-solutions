// Pushed: 2026-09-05 17:53:26 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 7.8 MB

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int high = n; 
        int low = 1; 

        while(low < high) {
            int mid = low + (high - low) / 2;
            if(isBadVersion(mid)) {
                high = mid; 
            }
            else {
                low = mid + 1; 
            }
        }
        return low; 
    }

};