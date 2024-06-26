#include <iostream>
#include <string>
#include <vector>
using namespace std ;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int givenSum = 0;
        int actualSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            givenSum += nums[i] ;
        }
        for (int i = 0; i < nums.size() + 1; i++) {
            actualSum += i ;
        }

        return (actualSum - givenSum) ;
    }
};