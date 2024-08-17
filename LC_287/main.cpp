#include <iostream>
#include <vector>
using namespace std ; 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        int res ;
        vector<int> arr(n+1, 0);
        for (int i = 0; i < n; i++) {
            arr[nums[i]]++ ;
            if (arr[nums[i]] > 1) {
                return nums[i] ;
            }
        }
        return 0 ; 
    }
};