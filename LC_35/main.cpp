#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                res = i;
                break;
            }
            else if (nums[i] < target && i == nums.size() - 1) {
                res = nums.size() ;
            }
            else if (nums[i] > target) {
                res = i ;
                break ;
            }
        }
        return res ;
    }
};