#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int k = 1, p = 0, q = 0, res = INT_MIN, count0 = 0 ;
            while (q < nums.size()) {
                if (nums[q] == 0) count0++ ;
                while (count0 > k) {
                    if (nums[p] == 0) {
                        count0-- ;
                    }
                    p++ ;
                }
                res = max(res, q-p) ;
                q++ ;
            }
            return res ;
        }
    };