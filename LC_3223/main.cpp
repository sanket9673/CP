class Solution {
    public:
        int minimumLength(string s) {
            unordered_map<char, int> x ;
            for (char c : s) x[c]++ ;
            for (char c : s) {
                if (x[c] > 2) x[c] -= 2 ;
            } 
            int res = 0 ;
            for (auto &val : x) res += val.second ;
            return res ;
        }
    };