#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        int minSteps(string s, string t) {
            unordered_map<char , int> x ;
            for (char c : s) x[c]++ ;
            // for (char c : t) {
            //     if (x.count(c) == 0) x[c]++ ;
            //     else x[c]-- ;
            // }                            DOESNT WORK
            for (char c : t) x[c]--;
            int res  = 0 ;
            for (auto &val : x) res += abs(val.second) ;
            return res ;
        }
    };