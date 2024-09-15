#include <iostream>
using namespace std ;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 0 ; 
        int count = 0 ;
        int k = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            k = max(k, nums[i]) ;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == k) {
                count++ ;
                res = max(res, count) ;
            }
            else {
                count = 0 ;
            }
        }

        return res ;
    }
};