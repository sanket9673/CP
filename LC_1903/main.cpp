#include <iostream>
using namespace std ;

class Solution {
public:
    string largestOddNumber(string num) {
        if ((num[num.length() - 1] - '0') % 2 != 0) {
            return num ;
        }

        string res = "" ;
        bool found = false ;
        int count = 0 ;

        for (int i = 0; i < num.length(); i++) {
            if ((num[i] - '0') % 2 != 0) {
                count = i ;
                found = true ;
            }
        }
        
        for (int i = 0 ; i <= count; i++) {
            res += num[i] ;
        }
        if (found == false) {
            return "" ;
        }
        return res ;
    }
};