class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res = "" ;
        unordered_set<int> x ;
        for (int val : spaces) {
            x.insert(val) ;
        }
        int idx = 0 ;
        while (idx < s.length()) {
            if (x.count(idx) != 0) {
                res += " " ;
            }
            res += s[idx] ;
            idx++ ;
        }
        return res;
    }
};