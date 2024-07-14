#include <iostream>
#include <string>
#include <vector>
using namespace std ;

class Solution {
public:
    int mySqrt(int x) {
        // Calculating the square root with binary search {O(log n)}
        
        int l = 0;
        int r = x;
        int res = 0;

        while (l <= r) {
            long long m = l + (r - l) / 2;

            if (m * m < x) {
                res = m;
                l = m + 1;
            }
            else if (m * m > x) {
                r = m - 1;
            }
            else {
                return m;
            }
        }
        return res;
    }
};
