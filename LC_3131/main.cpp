#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int a = INT_MAX ;
        int b = INT_MAX ;
        for (int val : nums1) {
            a = min(val, a) ;
        }
        for (int val : nums2) {
            b = min(val, b) ;
        }
        return b - a ;
    }
};