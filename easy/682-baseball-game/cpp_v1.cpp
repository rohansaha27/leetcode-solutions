// Pushed: 2026-10-05 18:03:24 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 12 MB

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record; 

        for(int i =0; i<operations.size(); i++) {
            string c = operations[i];

            if(c == "D") {
                int add =  record.back(); 
                add *= 2;
                record.emplace_back(add); 
            }
            else if(c == "C") {
                record.pop_back();
            }
            else if(c == "+") {
                int num_1 = record.back(); 
                int num_2 = record[record.size() - 2];
                int sum = num_1 + num_2; 
                record.emplace_back(sum);
            }
            else {
                record.emplace_back(stoi(c));
            }
        }
        int res = 0; 
        for(int x: record) {
            res += x;
        }
        return res; 
    }
};