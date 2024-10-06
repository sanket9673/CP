#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    static int findingSubarrays(vector<int>& nums, int goal) {
        if (goal < 0) {
            goal = 0 ;   // if goal = -1, make it to 0 
        }
        int l = 0 ;
        int current = 0 ;
        int sum = 0 ;
        for (int i = 0 ; i < nums.size(); i++) {
            current += nums[i] ;
            while (current > goal) {
                current -= nums[l] ;   // if curr exceed sum, decrease it by removing last l element
                l += 1 ;
            }
            sum += (i - l + 1) ;   // Keeping sum of subarrays form eg. from 0-2 there are 3 subarrays - 01 12 02
        }
        return sum ;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {    
        if (goal == 0) {
            return findingSubarrays(nums, goal) ;    
        }
        return findingSubarrays(nums, goal) - findingSubarrays(nums, goal - 1) ;
        // the idea is if we find subarray with goal <= 2 and goal <= 1.........after subtracting both we get mid val which is goal == 2
    }
};