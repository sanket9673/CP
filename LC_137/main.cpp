#include <iostream>
using namespace std ;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> x ;
        for (int val : nums) {
            x[val]++ ;
        }   
        vector<int> res ;
        for (const auto& pair : x) {
            if (pair.second == 1) {
                return pair.first ;
            }   
        }
        return 0 ;
    }
};