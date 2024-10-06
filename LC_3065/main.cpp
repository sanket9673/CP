#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0 ;
        for (int val : nums) {
            if (val < k) {
                count++ ;
            }
        }
        return count ;
    }
};