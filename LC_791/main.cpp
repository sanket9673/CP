class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int, int> x ;
        unordered_map<int, int> y ;
        for (int i = 0; i < order.length(); i++) {
            if (x.count(order[i]) == 0) {
                x.insert({order[i], 1}) ;
            }
            else {
                x[order[i]]++ ;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (y.count(s[i]) == 0) {
                y.insert({s[i], 1}) ;
            }
            else {
                y[s[i]]++ ;
            }
        }
        string res = "" ;
        for (int i = 0; i < order.length(); i++) {
            while (y[order[i]] > 0) {
                res += order[i] ;
                y[order[i]]-- ;
            }
        }
        for (const auto& pair : y) {
            if (pair.second != 0) {
                for (int i = 0; i < pair.second; i++) {
                    res += pair.first ;
                }
            }
        }
        return res ;
    }
};