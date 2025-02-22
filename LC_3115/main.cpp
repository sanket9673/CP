#include <bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int maximumPrimeDifference(vector<int>& nums) {
            unordered_set<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
            53, 59, 61, 67, 71, 73, 79, 83, 89 ,97 };
            int res = 0, p = 0 ;
            for (int i = 0 ; i < nums.size(); i++) {
                if (prime.count(nums[i]) != 0){
                    p = i;
                    break ;
                }
            }
            for (int i = p; i < nums.size(); i++) {
                if (prime.count(nums[i]) != 0) res = max(res, i - p) ;
            }
            return res ;
        }
    };