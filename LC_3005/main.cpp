#include <iostream>
using namespace std ;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
    int count = 1;
    vector<int> arr ;
    for (int i = 0; i < nums.size() - 1; i++){
        if (nums[i] == nums[i+1]) {
            count++ ;
        }
        else {
            arr.push_back(count) ;
            count = 1 ;
        }
    }
    
    arr.push_back(count) ;
    int a = arr[0] ;
    for (int i = 1; i < arr.size(); i++) {
        a  = max(a, arr[i]) ;
    }
    int res = 0 ;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == a) {
            res += a ;
        }
    }
    return res ;

    }
};