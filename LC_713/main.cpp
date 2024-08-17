#include <iostream>
using namespace std ;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        long long res = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            res = nums[i] ;
            if (nums[i] < k) {
                count++ ;
            }
            for (int j = i+1; j < nums.size(); j++) {
                if (res*nums[i] <= INT_MAX) { // So as answer doesn't cross the integer limit
                    res *= nums[j] ;
                    if (res < k) {
                        count++ ;
                    }
                }
                else {
                    break;
                }
            }
        }
        return count ;
    }
};