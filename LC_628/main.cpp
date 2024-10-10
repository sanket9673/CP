#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size() - 1; 
        sort(nums.begin(), nums.end()); 
        int a = nums[0] * nums[1] * nums[n]; 
        int b = nums[n] * nums[n-1] * nums[n-2]; 
        return max(a, b); 
    }
};