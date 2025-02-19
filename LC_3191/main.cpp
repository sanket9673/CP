#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int res = 0;
            bool possible = true ;
            for (int i = 0; i < nums.size() - 2; i++) {
                if (nums[i] == 0) {
                    nums[i] = 1 - nums[i] ;
                    nums[i+1] = 1 - nums[i+1] ;
                    nums[i+2] = 1 - nums[i+2] ;
                    res++ ;
                } 
            }
            for (int i : nums) {
                if (i == 0) {
                    possible = false ;
                    break ;
                }
            }
            if (possible) {
                return res ;
            }
            
            return -1 ;
        }
    };