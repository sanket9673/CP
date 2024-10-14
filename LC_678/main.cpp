#include <iostream>
using namespace std ;

class Solution {
public:
    bool checkValidString(string s) {
        // int res = 0 ;
        // int star = 0 ;
        // for (int i = 0 ; i < s.length(); i++) {
        //     if (s[i] == '(') {
        //         res--;
        //     }
        //     else if (s[i] == ')') {
        //         res++ ;
        //     }
        //     else {
        //         star++ ;
        //     }
        // }
        // if (res == 0) {
        //     return true ;
        // }
        // else if (abs(res) <= abs(star)) {
        //     return true ;
        // }
        // else {
        //     return false ;
        // }
        int low = 0, high = 0  ;
        for (char c : s) {
            if (c == '(') {
                low++ ;
                high++ ;
            }
            else if (c == ')') {
                low = max(0, low - 1); // since it is minimum unmatched
                high-- ;
            }
            else if (c == '*') {
                low = max(0, low - 1) ; // if * = '('. min unmatched decreases
                high++ ; // if * = ')' , max. unmatched increases
            }
            if (high < 0) {
                return false ;
            }
        }
        if (low == 0) {
            return true ;
        }
        return false ;
    }
};