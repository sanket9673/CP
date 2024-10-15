#include <iostream>
uisng namespace std ;

class Solution {
public:
    bool check(vector<int>& nums1, vector<int>& nums2, int diff) {
        int count = 0, j = 0 ;
        for (int i = 0; i < nums1.size() && j < nums2.size(); i++) {
            if (nums1[i] + diff != nums2[j]){
                count++ ;
            }
            else {
                j++ ;
            }
        }
        if (count > 2) {
            return false ;
        }
        return true ;
    }

    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end()) ;
        sort(nums2.begin(), nums2.end()) ;
        int res = INT_MAX ;
        int mn = *min_element(nums2.begin(), nums2.end()) ;
        for (int i = 0; i < min(3, (int)nums1.size()); i++) {
            int x = mn - nums1[i] ;
            if (check(nums1, nums2, x) == true) {
                res = min(res, x) ;
            }
        }   
        return res;
    }
};