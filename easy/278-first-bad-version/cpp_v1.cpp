// Pushed: 2026-09-05 17:49:44 UTC
// Difficulty: Easy
// Runtime: 2 ms
// Memory: 7.9 MB

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int high = n; 
        int low = 1; 
        int mid; 

        if(isBadVersion(1)) {
            return 1; 
        }

        while(low <= high) {
            mid = low + (high - low) / 2;
            if(isBadVersion(mid)) {
                if(!isBadVersion(mid-1)) {
                    return mid; 
                }
                else {
                    high = mid - 1;
                } 
            }
            else {
                low = mid + 1;
            } 
        }
        return -1; 
    }
};