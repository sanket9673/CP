#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size() ;
        if (n < 3) {
            return true ;
        }
        vector<int> arr(nums) ;
        // arr = nums ;
        sort(arr.begin(), arr.end()) ;
        while (n >= 0) {
            int temp = arr[0] ;
            arr.erase(arr.begin()) ;
            arr.push_back(temp) ;
            if (arr == nums) {
                return true ;
            }
            n-- ;
        }
        return false ;
    }
};