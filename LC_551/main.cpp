#include <iostream>
using namespace std ;

class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0 ;
        int countL = 0 ;
        for (char c : s) {
            if (c == 'A') {
                countA++ ;
            }
        }
        if (countA < 2) {
            int res = INT_MIN ;
            for (char c : s) {
                if (c == 'L') {
                    countL++ ;
                    res = max(res, countL) ;
                }
                else {
                    countL = 0 ;
                }
            }
            
            if (res > 2) {
                return false ;
            }
            else {
                return true ;
            }
        }
        else {
            return false ;
        }
    }
};