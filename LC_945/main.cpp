#include <iostream>
using namespace std ;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int res = 0 ;
        int temp = nums[0] ;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= temp) {
                int a = nums[i] ;
                nums[i] = temp + 1 ;
                res += nums[i] - a ;
            }
            temp = nums[i] ;
        }
        return res ;
    }
};