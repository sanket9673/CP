#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int p = 0, res = 1, mask = nums[0] ;
            for (int i = 1; i < nums.size(); i++) {
                while ((mask & nums[i]) != 0) {
                    mask ^= nums[p] ;
                    p++ ;
                }
                mask |= nums[i] ;
                res = max(res, i - p + 1) ;
            }
            return res ;
        }
    };