// Pushed: 2026-10-08 01:35:13 UTC
// Difficulty: Medium
// Runtime: 15 ms
// Memory: 19.7 MB

class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        int size = transactions.size();
        vector<string> name(size), city(size), out; 
        vector<int> time(size), amount(size); 

        int i = 0; 
        for(string s: transactions){
            vector<string> in = split(s,',');
            name[i] = in[0];
            city[i] = in[3];
            time[i] = stoi(in[1]);
            amount[i] = stoi(in[2]);
            i++; 
        }
        
        for(int i=0; i<size; i++) {
            bool bad = false; 
            if (amount[i] > 1000) {
                bad = true; 
            }

            for(int j = 0; j<size && !bad; j++) {
                int time_diff = abs(time[i] - time[j]); 
                if(name[i] == name[j] && city[i] != city[j] && time_diff <= 60) {
                    bad = true; 
                }
            }

            if(bad) {
                out.emplace_back(transactions[i]); 
            }
        }

        return out; 
    }

    vector<string> split(string s, char c) {
        vector<string> out(1); 
        for(char d : s) {
            if(d == c) {
                out.emplace_back();
            }
            else {
                out.back() += d; 
            }
        }
        return out; 
    }
};