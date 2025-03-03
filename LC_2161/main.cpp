#include <iostream>
#include <vector>
using namespace std ;

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            // vector<int> arr1, arr2, arr3, res;
            // for (int i : nums) {
            //     if (i == pivot) arr3.push_back(i) ;
            //     else if (i > pivot) arr2.push_back(i) ;
            //     else arr1.push_back(i) ;
            // }
            // res = arr1 ;
            // for (int i : arr3) res.push_back(i) ;
            // for (int i : arr2) res.push_back(i) ;
            // return res ;
            // 2 POINTER APPROACH
            vector<int> res(nums.size(), 0) ;
            int l = 0, r = nums.size() - 1 ;
            for (int i = 0 , j  = nums.size() - 1; i < nums.size(); i++, j--) {
                if (nums[i] < pivot) {
                    res[l] = nums[i] ;
                    l++ ;
                }
                if (nums[j] > pivot) {
                    res[r] = nums[j] ;
                    r-- ;
                }
            }
            while (l <= r) {
                res[l] = pivot ;
                l++ ;
            }
            return res ;
        }
    };