#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() < 2) {
            if (target == nums[0]) {
                return 0 ;
            }
            return -1 ;
        }
        int l = 0 ;
        int r = nums.size() - 1 ;
        while (l <= r) {
            int mid = l + (r - l) / 2 ;
            if (nums[mid] == target) {
                return mid ;
            }
            else if (target < nums[mid]) {
                r = mid - 1 ;
            }
            else {
                l = mid + 1 ;
            }
        }
        return -1 ;
    }
};