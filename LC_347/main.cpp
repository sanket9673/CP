#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    static bool compare(const pair<int, int> a, const pair<int,int> b) {
        return a.second > b.second ;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> x ;
        for (int i = 0; i < nums.size(); i++) {
            if (x.count(nums[i]) == 0) {
                x[nums[i]] = 1 ;
            }
            else {
                x[nums[i]]++ ;
            }
        }

        vector<pair<int, int>> vec(x.begin(), x.end()) ;
        sort(vec.begin(), vec.end(), compare) ;

        vector<int> res ;   
        int  i = 0 ;
        while (i < k) {
            res.push_back(vec[i].first); ;
            i++ ;
        }
        return res ;
    }
};