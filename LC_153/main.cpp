#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() < 2) {
            return nums[0] ;
        }
        
        int low = 0 ;
        int high = nums.size() - 1 ;
        int res = 0 ;
        if (nums[low] <= nums[high]) {
            return nums[low] ; //Means they are sorted and not rotated
        }
        while (low <= high) {
            int mid = low + (high - low) / 2 ;

            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid] ;
            }
            if (mid < nums.size() - 1 && nums[mid] > nums[mid+1]) {
                return nums[mid+1] ;
            }
            // The above is used to handle the edge test cases  .
            if (nums[low] <= nums[mid]) {
                low = mid + 1 ; // Sorted so they are in increasing order, must lie in right
            }
            if (nums[mid] <= nums[high]) {
                high = mid - 1 ; // Sorted so they are in increasing order, must lie in left
            }
        }
        return -1 ;
        // if (nums.size() < 2) {
        //     return nums[0] ;
        // }
        // int mn = nums[0] ;
        // for (int i = 1; i < nums.size(); i++) {
        //     mn = min(mn, nums[i]) ;
        // }
        // return mn ;
    }
};