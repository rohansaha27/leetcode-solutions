// Pushed: 2026-09-29 00:22:07 UTC
// Difficulty: Easy
// Runtime: 4 ms
// Memory: 10.2 MB

class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0; 
        string res; 

        for(int i=0; i<max(a.size(), b.size()); i++) {
            int digitA = 0; 
            int digitB = 0; 
            if(i < a.size()) {
                digitA = a[i] - '0'; 
            }
            if(i < b.size()) {
                digitB = b[i] - '0'; 
            }

            int total = digitA + digitB + carry; 
            res += to_string(total % 2); 
            carry = total / 2; 
        }

        if (carry != 0) {
            res += '1'; 
        }

        reverse(res.begin(), res.end());
        return res;
    }
};