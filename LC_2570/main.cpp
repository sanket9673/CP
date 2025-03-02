#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            vector<vector<int>> smp, res ;
            for (int i = 0 ; i < nums1.size(); i++) {
                smp.push_back(nums1[i]) ;
            }
            for (int i = 0; i < nums2.size(); i++) {
                smp.push_back(nums2[i]) ;
            }
            sort(smp.begin(), smp.end()) ;
            for (int i = 0; i < smp.size() - 1; i++) {
                if (smp[i][0] == smp[i+1][0]) {
                    smp[i][1] = smp[i][1] + smp[i+1][1] ;
                    res.push_back(smp[i]) ;
                    i++ ;
                }
                else{
                    res.push_back(smp[i]) ;
                }
            }
            if (smp[smp.size() - 1][0] != smp[smp.size() - 2][0]) res.push_back(smp[smp.size() - 1]) ;
            return res ;
        }
    };