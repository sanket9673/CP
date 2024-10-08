#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0 ;
        int r = nums.size() - 1 ;

        while (l <= r) {
            int mid = (l+r) / 2 ;
            if ((mid == 0 || nums[mid-1] <= nums[mid]) && (mid == nums.size() - 1 || nums[mid] >= nums[mid + 1])) {
                return mid ;
            }
            // Handing the edge cases and returing the answer
            else if (mid > 0 && (nums[mid] <= nums[mid - 1])) {
                r = mid - 1 ;
            }
            else {
                l = mid + 1 ;
            }
        }

        return -1 ;
    }
};