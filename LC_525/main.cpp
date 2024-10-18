#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums[i] = -1 ;
            }
        }

        unordered_map<int, int> x ;
        int res = 0 ;
        int pref = 0 ;
        x[0] = -1 ;  // handling when the subarray starts with index 0 .
        for (int i = 0 ; i < nums.size(); i++) {
            pref += nums[i] ;
            if (x.count(pref) != 0) {
                res = max(res, i - x[pref]);
            }
            else {
                x[pref] = i ;
            }
        }
        
        return res ;
    }
};