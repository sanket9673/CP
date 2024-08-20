#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums ;
        }
        vector<int> res ;
        sort(nums.begin(), nums.end()) ;
        int count = 1 ;
        vector<pair<int,int>>arr ;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                count++ ;
            }
            else {
                arr.push_back({nums[i-1], count}) ;
                count = 1 ;
            }
        }
        
        arr.push_back({nums.back(), count}) ;

        sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first ;
            }
            return a.second < b.second;
        });

        for (const auto& pair : arr) {
            for (int i = 0; i < pair.second; ++i) {
                res.push_back(pair.first) ;
            }
        }

        return res ;
    }
};
