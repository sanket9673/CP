#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0] ;
        int maxEnd = nums[0] ;

        for (int i = 1; i < nums.size(); i++) {
            maxEnd = max(nums[i], maxEnd + nums[i]) ;
            res = max (maxEnd, res) ;
        }

        return res ;
    }
};