#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0 ;
        for (int val : nums) {
            if (val < 0) {
                neg++ ;
            }
            else if (val > 0){
                pos++ ;
            }
        }
        if (pos >= neg) {
            return pos ;
        }
        else {
            return neg ;
        }
    }
};