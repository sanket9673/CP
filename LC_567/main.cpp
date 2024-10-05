#include <iostream>
using namespace std ;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false ;
        }
        sort(s1.begin(), s1.end()) ;
        for (int i = 0 ; i < s2.length(); i++) {
            string res = s2.substr(i, s1.length()) ;
            sort(res.begin(), res.end()) ;
            if (s1 == res) {
                return true ;
            }
        }
        return false ;
    }
};