#include <iostream>
#include <vector>
#include <map>
using namespace std ;

// TIME COMPLEXITY OF THIS CODE IS O(N) AND NOT O(LOG[N]) 


// FOR O(LOG[N]), WE SHOULD USE HERE BINARY SEARCH TO FIND THE 1. FIRST OCCURENCE AND 2. LAST OCCURENCE 
// OF ELEMENT WITH BINARY SEARCH

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> nt = {-1,-1} ;
        int n = nums.size() ;
        int f = -1;
        int s = 0 ;


        if (nums.empty()) {
            return nt ;
        }

        else {
            for (int i = 0; i < n; i++) {
                if (nums[i] == target && f == -1) {
                    f = i ;
                    s = f ;
                }
                else if (nums[i] == target) {
                    s = i ;
                }
            }

            if (f == -1) {
                return nt ;
            }
            else {
                return {f,s} ;
            }
        }

    }
};
