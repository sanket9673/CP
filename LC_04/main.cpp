#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;


// This problem is solved using the TC - O((m+n)log(m+n))   BUT originally it should be solved by O(log(m+n)) 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr ;
        for (int i = 0; i < nums1.size(); i++) {
            arr.push_back(nums1[i]) ;
        }   
        for (int i = 0; i < nums2.size(); i++) {
            arr.push_back(nums2[i]) ;
        }

        sort(arr.begin(), arr.end()) ;

        int n = arr.size() ;
        if (n % 2 == 0) {
            return (arr[n/2] + arr[n/2 - 1]) / 2.0 ;
        }
        else {
            return arr[n/2] ;
        }
    }
};