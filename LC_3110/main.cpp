#include <iostream>
using namespace std ;

class Solution {
public:
    int scoreOfString(string s) {
        int res = 0 ;
        for(int i = 0 ; i < s.length() - 1; i++) {
            res += abs(s[i+1] - s[i]) ;
        }
        return res ;
    }
};