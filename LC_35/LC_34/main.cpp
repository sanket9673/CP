#include <iostream>
using namespace std ;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> nt = {-1,-1} ;
        int n = nums.size() ;
        int f = -1;
        int s = 0 ;

        if (nums.empty()) {
            return nt ;
        }

        else {
            for (int i = 0; i < n; i++) {
                if (nums[i] == target && f == -1) {
                    f = i ;
                    s = f ;
                }
                else if (nums[i] == target) {
                    s = i ;
                }
            }
            if (f == -1) {
                return nt ;
            }
            else {
                return {f,s} ;
            }
        }

    }
};
