#include <iostream>
using namespace std ;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        // IDEA - EVERY ELE IN NUM1 REPEATS N TIMES AND VICE VERSA
        int n = nums2.size() ;
        int res1 ;
        if (n % 2 == 0) {
            res1 = 0 ;
        }
        else {
            res1 = nums1[0] ;
            for (int i = 1 ; i < nums1.size(); i++) {
                res1 = res1 ^ nums1[i] ;
            }
        }
        int m = nums1.size() ;
        int res2 ;
        if (m % 2 == 0) {
            res2 = 0 ;
        }
        else {
            res2 = nums2[0] ;
            for (int i = 1 ; i < nums2.size(); i++) {
                res2 = res2 ^ nums2[i] ;
            }
        }

        return res1 ^ res2 ;
    }
};