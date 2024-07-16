#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int p = 0; 
        int q = 0;
        // TWO POINTER APPROACH (MAINTAINING TWO POINTS AT TWO ARRAYS GIVEN)
        while (p < nums1.size() && q < nums2.size()) {
            if (nums1[p] == nums2[q]) {
                return nums1[p] ;
            }
            else if (nums1[p] > nums2[q]) {
                q++ ;
            }
            else {
                p++ ;
            }
        }
        return -1 ;

    }
};