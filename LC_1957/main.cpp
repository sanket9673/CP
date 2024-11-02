#include <iostream>
using namespace std ;

class Solution {
public:
    string makeFancyString(string s) {
        // if (s.length() < 2) {
        //     return s ;
        // }
        
        string res = "" ;
        char c = s[0] ;
        res += c ;
        int count = 1 ;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == c) {
                count++ ;
                if (count < 3) {
                    res += c ;
                }
            }
            else {
                c = s[i] ;
                count = 1 ;
                res += c ;
            }
        }

        return res ;
    }
};