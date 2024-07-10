#include <iostream>
#include<vector>
#include<algorithm>
#include <cmath>

using namespace std ;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end()) ;
        
        sort(nums.begin(), nums.end()) ;

        return nums.size() ;
        
    }
};