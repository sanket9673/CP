#include <iostream>
using namespace std ;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() % 2 == 0) {
            return -1 ;
        }
        else if (nums.size() < 2) {
            return nums[0] ;
        }
        int l = 0 ;
        int r = nums.size() - 1 ;
        while (l < r) {
            int mid = l + (r - l) / 2 ;
            if (mid % 2 == 0 && mid < nums.size() - 1) {
                if (nums[mid] == nums[mid + 1]) {
                    l = mid + 1 ;
                }
                else {
                    r = mid;
                }
            }
            else if (mid % 2 != 0 && mid > 0) {
                if (nums[mid] == nums[mid - 1]) {
                    l = mid + 1 ;
                }
                else {
                    r = mid-1 ;
                }
            }
        }
        return nums[l] ;
    }
};