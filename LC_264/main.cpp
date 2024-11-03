#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(n) ;
        res[0] = 1 ;
        int i2 = 0 , i3 = 0 , i5 = 0 ;

        for (int i = 1; i < n; i++) {
            int next2 = res[i2] * 2 ;
            int next3 = res[i3] * 3 ;
            int next5 = res[i5] * 5 ;

            int nextNum = min(next2, min(next3, next5)) ;
            res[i] = nextNum ;
            
            if (nextNum == next2) {
                i2++ ;
            }
            if (nextNum == next3) {
                i3++ ;
            }
            if (nextNum == next5) {
                i5++ ;
            }
        }
        
        return res[n-1] ;
    }
};