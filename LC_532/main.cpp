#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (nums.size() < 2 || k < 0) {
            return 0 ;
        }
        int count = 0 ;

        if (k == 0) {
            unordered_map<int, int> x ;
            for (int val : nums) {
                if (x.count(val) == 0) {
                    x[val] = 1 ;
                }
                else {
                    x[val]++ ;
                }
            }
            for (const auto& pair : x) {
                if (pair.second > 1) {
                    count++ ;
                }
            }
            return count ;
        }
        else {
            unordered_set<int> y(nums.begin(), nums.end()) ;
            for (int val : y) {
                if (y.count(val + k) == 1) {
                    count++ ;
                }
            }
            return count ;
        }
    }
};