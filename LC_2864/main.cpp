#include <iostream>
using namespace std ;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0 ;
        for (char c : s)
            count += (c == '1') ;

        for (char &c : s) 
            c = '0' ;

        if (count == 1) {
            s[s.length() - 1] = '1' ;
            return s ;
        }
        else {
            for (int i = 0; i < count - 1; i++) {
                s[i] = '1' ;
            }
            s[s.length() - 1] = '1' ;
            return s ;
        }
        return "" ;
    }
};