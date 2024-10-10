#include <iostream>
#include <math.h>
using namespace std ;

class Solution {
public:
    int titleToNumber(string columnTitle) {

        int n = columnTitle.length() ;
        int res = 0 ;
        
        for (char c : columnTitle) {
            n -= 1 ;
            res += (c - 64)*(pow(26, n)) ;
        }

        return res ;
    }
};