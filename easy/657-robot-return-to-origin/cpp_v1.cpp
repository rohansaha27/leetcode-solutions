// Pushed: 2026-10-05 17:26:22 UTC
// Difficulty: Easy
// Runtime: 2 ms
// Memory: 10.7 MB

class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> moveMap; 
        
        for(int i=0; i<moves.size(); i++) {
            char c = moves[i]; 
            moveMap[c]++;   
        }

        return moveMap['L'] == moveMap['R'] && moveMap['U'] == moveMap['D'];
    }
};