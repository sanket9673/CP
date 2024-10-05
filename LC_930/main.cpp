#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    static int findingSubarrays(vector<int>& nums, int goal) {
        if (goal < 0) {
            goal = 0 ;
        }
        int l = 0 ;
        int current = 0 ;
        int sum = 0 ;
        for (int i = 0 ; i < nums.size(); i++) {
            current += nums[i] ;
            while (current > goal) {
                current -= nums[l] ;
                l += 1 ;
            }
            sum += (i - l + 1) ;
        }
        return sum ;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {    
        if (goal == 0) {
            return findingSubarrays(nums, goal) ;    
        }
        return findingSubarrays(nums, goal) - findingSubarrays(nums, goal - 1) ;
    }
};