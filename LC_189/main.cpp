#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // normaliziing k to handle the greater value
        int n = nums.size() ;
        k %= n ;
        vector<int> res(n) ;
        for (int i = 0; i < k ; i++) {
            res[i] = nums[n - k + i] ; 
        }
        for (int i = 0; i < n - k; i++) {
            res[i+k] = nums[i] ;
        }
        nums = res ;
    }
};