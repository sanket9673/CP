class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string, int> x ;
        unordered_map<string, int> y ;
        for (const auto& mes : message) {
            x[mes]++ ;
        }
        for (const auto& mes : bannedWords) {
            y[mes]++ ;
        }
        int count = 0 ;
        for (const auto& pair : x) {
            if (y.count(pair.first) == 1) {
                if (pair.second > 1) {
                    count += 2 ;
                }
                count++ ;
            }
        } 
        if (count >= 2) {
            return true ;
        }
        else {
            return false ;
        }
    }
};