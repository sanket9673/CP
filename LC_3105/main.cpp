#include <iostream>
using namespace std ;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res1 = 1, res2 = 1 ;
        int a = nums[0] ;
        int s1 = 1, s2 = 1 ;
        for (int i = 1; i < nums.size(); i++) {
            if (a < nums[i]) s1++ ;
            else {
                res1 = max(res1, s1) ;
                s1 = 1 ;
            }
            a = nums[i] ;
        }
        res1 = max(res1, s1) ;
        
        a = nums[0] ;
        for (int i = 1; i < nums.size(); i++) {
            if (a > nums[i]) s2++ ;
            else {
                res2 = max(res2, s2) ;
                s2 = 1 ;
            }
            a = nums[i] ;
        }
        res2 = max(res2, s2) ;
        
        return max(res1, res2) ;
    }
};