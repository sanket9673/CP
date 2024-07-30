#include <iostream>
using namespace std ;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 1 ;

        if (nums.size() == 1) {
            return false ;
        }
        
        else {
            sort(nums.begin(), nums.end()) ;
            for (int i = 1 ; i < nums.size(); i++) {
                if (nums[i] == nums[i-1]) {
                    count++ ;
                    if (count == 2) {
                        return true ;
                    }
                }
                else {
                    count = 1 ;
                }
            }
            return false ;
        }

    }
};