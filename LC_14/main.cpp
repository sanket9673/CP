#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Arrange the string lexicographically from smallest to largest
        string res = "" ;
        if (strs.empty()) {
            return res ;
        }
        else {
            sort(strs.begin(), strs.end()) ;
            string frt = strs[0] ;
            string lst = strs[strs.size() - 1] ;
            int a = min(frt.size(), lst.size()) ;

            for (int i = 0; i < a; i++) {
                if (frt[i] != lst[i]) {
                    return res ;
                }
                res += frt[i] ;
            }
            return res ;
        }
        return "" ;
    }
};