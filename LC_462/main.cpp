#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
    public:
        int minMoves2(vector<int>& nums) {
            sort(nums.begin(), nums.end()) ;
            int res = 0, x = 0 ;
            if (nums.size() % 2 != 0) {
                x = (nums[nums.size() / 2] + nums[(nums.size() - 1) / 2]) / 2 ;
            }
            else x = nums[nums.size() / 2];
    
            for (int i : nums) {
                res += abs(x - i) ;
            }
            return res ;
        }
    };