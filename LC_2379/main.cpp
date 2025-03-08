#include <iostream>
using namespace std ;

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            // SLIDING WINDOW
            int res = INT_MAX ;
            for (int i = 0 ; i < blocks.size() - k + 1; i++) {
                int countw = 0 ;
                for (int j = 0 ; j < k; j++) {
                    if (blocks[i + j] == 'W') countw++ ;
                }
                res = min(res, countw) ;
            }
            return res ;
            
        }
    };