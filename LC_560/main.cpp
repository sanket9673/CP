#include <iostream>
using namespace std ;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> x ;
        x[0] = 1 ;
        int sum, count = 0 ; 
        for (int i = 0 ; i < nums.size(); i++) {
            sum += nums[i] ;
            if (x.count(sum - k) != 0) {
                count += x[sum - k] ; // Adding all the frequency occurence of (sum - k)
            }
            x[sum]++ ;
        }
        return count ;
    }
};