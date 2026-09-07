// Pushed: 2026-09-07 02:31:53 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 11.6 MB

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // let's try using an array since we only have 26 letters to deal with

        int arr[26] = {0}; 

        for(char c: magazine) {
            arr[c - 'a']++; 
        }

        for(char c: ransomNote) {
            if(arr[c - 'a'] == 0) {
                return false; 
            }
            arr[c - 'a']--; 
        }
        return true; 
    }
};