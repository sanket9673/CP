#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<long long> x(nums.begin(), nums.end()) ;
        // int mx = 0 ;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (x.count(nums[i]) == 0) {
        //         x.insert(nums[i]) ;
        //     }
        // }

        long long res = 0; 
        int i = 1 ;
        while (true) {
            if (x.count(i) == 0) {
                res = i ;
                break ;
            }
            i++ ;
        }
        return res ;
    }
};