#include <iostream>
#include <vector>
#include<map>
#include<string>

using namespace std ;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0;
        int r = num;
        int res = false;
        
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (mid * mid < num) {
                res = false;
                l = mid + 1 ;
            }

            else if (mid * mid > num) {
                r = mid - 1;
            }

            else {
                return true;
            }
        }

        return res ;
    }
};