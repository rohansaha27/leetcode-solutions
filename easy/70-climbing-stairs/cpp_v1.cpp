// Pushed: 2026-09-29 00:46:15 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 7.8 MB

class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> memory(46, -1);
        return climbStairs_wrapper(n, memory);
    }

    int climbStairs_wrapper(int n, vector<int> &memory){
        if(memory[n] != -1) {
            return memory[n]; 
        }
        if (n <= 3) {
            memory[n] = n; 
            return n; 
        }
        
        memory[n-1] = climbStairs_wrapper(n-1, memory);
        memory[n-2] = climbStairs_wrapper(n-2, memory);

        return memory[n-1] + memory[n-2]; 
    }
};