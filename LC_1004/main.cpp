#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int p = 0 , q = 0, count0 = 0, res = INT_MIN ;
            while (q < nums.size()) {
                if (nums[q] == 0) count0++ ;
                while (count0 > k) {
                    if (nums[p] == 0) {
                        count0-- ;    
                    }
                    p++ ;
                }
                res = max(res, (q-p+1)) ;
                q++ ;
            }
            return res ;
        }
    };