#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> x ;
        unordered_set<int> y ;
        for (int i = 0 ; i < nums1.size(); i++) {
            x.insert(nums1[i]) ;
        }
        for (int i = 0 ; i < nums2.size(); i++) {
            y.insert(nums2[i]) ;
        }

        vector<int> res ;
        for (const auto& pair : y) {
            if (x.count(pair) == 1) {
                res.push_back(pair) ;
            }
        }

        return res ;
    }
};