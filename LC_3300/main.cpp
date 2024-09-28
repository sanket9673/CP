#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> res ;
        for(int i = 0 ; i < nums.size(); i++) {
            int sum  = 0 ;
            while(nums[i] > 0) {
                sum += nums[i] % 10 ;
                nums[i] /= 10 ;
            }
            res.push_back(sum) ;
        }
        int mn = INT_MAX ;
        for (int val : res) {
            mn = min(val , mn) ;
        }

        return mn ;
    }
};