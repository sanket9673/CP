#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> x ;
        for (int val : nums) {
            if (x.count(val) == 0) {
                x.insert(val) ;
            }
            else {
                x.erase(val) ;
            }
        }
        vector<int> res ;
        for (const auto& pair : x) {
            res.push_back(pair) ;
        }
        return res ;
    }
};