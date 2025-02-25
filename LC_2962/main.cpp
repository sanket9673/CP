#include <iostream>
using namespace std ;

class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int k) {
            int p = 0, q = 0 ; 
            long long count = 0 , res = 0;
            unordered_map<int, int> x ;
            int mx = *max_element(nums.begin(), nums.end()) ;
            while (q < nums.size()) {
                if (nums[q] == mx) count++ ;
    
                while (count >= k) {
                    if (nums[p] == mx) count-- ;
                    p++ ;
                    res += nums.size() - q ;
                }
                q++ ;
            }
            return res ;
        }
    };