#include <iostream>
using namespace std ;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) {
            return false ;
        }
        else if (n == 1) {
            return true ;
        }
        else {
            while (n % 3 == 0) {
                n /= 3 ;
            }
            if (n == 1) {
                return true ;
            }
            else {
                return false ;
            }
        }
    }
};