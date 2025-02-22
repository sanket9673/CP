#include <bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            unordered_map<int, int> x ;
            for (int i : nums) x[i]++ ;
            int res = 0 ;
            bool poss = true ;
            for (auto val : x) {
                if (val.second == 1) return -1 ;
                if (val.second % 3 == 0) res += val.second / 3 ;
                // 3 3 --- 3 2 2 (3 borrowed and converted to 2 2 group)
                else res += (val.second / 3) + 1 ;
            }
            return res;
        }
    };