#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        if (n == 1) {
            if (nums[0] == target) {
                return 0 ;
            }
            return -1 ;
        }
        int l = 0 ;
        int m = n - 1 ;

        while (l <= m) {
            int mid = l + (m - l) / 2 ;
            if (target == nums[mid]) {
                return mid ;
            }

            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid]) {
                    m = mid - 1 ;
                }
                else {
                    l = mid + 1 ;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[m]) {
                    l = mid + 1 ;
                }
                else {
                    m = mid - 1;
                }
            }
        }
        
        return -1 ;
    }
};