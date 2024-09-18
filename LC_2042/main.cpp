class Solution {
public:
    static int value(string val) {
        int r = 0 ;
        for (int i = 0; i < val.length(); i++) {
            r = r*10 + (val[i] - '0') ;
        }
        return r ;
    }
    bool areNumbersAscending(string s) {
        vector<int> res ;
        string val = "";
        for (const char& x : s) {
            if (isdigit(x)) {
                val += x ;
            }
            else if(!val.empty()){ // check for this cond. too which is missed 
                res.push_back(value(val)) ;
                val = "" ;
            }
        }
        if (val != "") {
            res.push_back(value(val)) ;
            val = "" ;
        }

        for (int i = 0; i < res.size() - 1; i++) {
            if (res[i] >= res[i+1]) {
                return false ;
            }
        }
        return true ;
    }
};