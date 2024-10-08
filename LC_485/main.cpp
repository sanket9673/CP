#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0 ;
        int count = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
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