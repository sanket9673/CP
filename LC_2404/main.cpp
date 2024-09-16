#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std ;

class Solution {
public:

    static bool compare(const pair<int, int> a, const pair<int, int> b) {
        if (a.second == b.second) {
            return a.first < b.first ;
        }
        return a.second > b.second ;
    }

    int mostFrequentEven(vector<int>& nums) {
        if (nums.size() == 1) {
            if (nums[0]%2 == 0) {
                return nums[0] ;
            }
            return -1 ;
        }

        unordered_map<int, int> x ;
        for (int val : nums) {
            if (val % 2 == 0) {
                if (x.count(val) == 0) {
                    x[val] = 1 ;
                }
                else {
                    x[val]++ ;
                }
            }
        }
        if (x.empty()) {
            return -1 ;
        }

        vector<pair<int, int>> vec(x.begin(), x.end()) ;
        sort(vec.begin(), vec.end(), compare) ;

        return vec[0].first ;
    }
};