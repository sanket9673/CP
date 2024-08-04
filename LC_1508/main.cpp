#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        const int MOD = 1e9 + 7; //to handl overflow condition

        if (n == 1) {
            return nums[0] ;
        }

        else {
            vector<int> res ;
            for (int i = 0; i < n; i++) {
                int sum = 0 ;
                for (int j = i; j < n; j++) {
                    sum += nums[j] ;
                    res.push_back(sum) ;
                }
            }       
                 
            sort (res.begin(), res.end()) ;

            // converting 1 index to 0 index
            int start = left - 1 ;
            int end = right - 1 ;
            long long totalsum = 0 ;

            for (int i = start; i <= end; i++) {
                totalsum = (totalsum + res[i]) % MOD ;
            }

            return totalsum ;
        }
    }
};