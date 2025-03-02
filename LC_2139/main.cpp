#include <iostream>
using namespace std ;

class Solution {
    public:
        int minMoves(int target, int maxDoubles) {
            int start = 1, mx = maxDoubles, res = 0;
            if (maxDoubles == 0) {
                return target - start ;
            }
            while (target != 1) {
                if (maxDoubles > 0 && target % 2 == 0) {
                    maxDoubles-- ;
                    target /= 2 ;
                }
                else {
                    target -= 1 ;
                }
                res++ ;
            }
            return res ;
        }
    };