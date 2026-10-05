// Pushed: 2026-10-05 17:28:00 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 10.2 MB

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char c : moves) {
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'L') x--;
            else x++;
        }
        return x == 0 && y == 0;
    }
};