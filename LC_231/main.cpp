#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>

using namespace std ;

class Solution {
public:

    bool isPowerOfTwo(int n) {
        if (n == 0) {
            return false ;
        }
        else if (n < 0) {
            return false ;
        }
        else if (static_cast<int>(log2(n)) == log2(n)) {
            return true ;
        }
        else {
            return false ;
        }

        // if (n <= 0) {
        //     return false ;
        // }

        // else if (n > 0 && (n & n - 1 )== 0) {
        //     return true ;
        // }
        
        // else {
        //     return false ;
        // }
    }
};