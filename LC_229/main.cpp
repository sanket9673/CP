#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        int sz = n / 3 ;
        if (n < 3) {
            if (n == 2) {
                if (nums[0] == nums[1]) {
                    return {nums[0]} ;
                }
            }
            return nums ;
        }
        sort(nums.begin(), nums.end()); 
        int count = 1 ;
        int smp ;
        vector<int> res ;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                count++ ;
                if (count > sz && smp != nums[i]) {
                    res.push_back(nums[i]) ;
                    smp = nums[i] ;
                }
            }
            else {
                count = 1 ;
            }
        }

        return res ;
    }
};