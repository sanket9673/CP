#include <iostream>
using namespace std ;

class Solution {
    public:
        int checkparity(int n) {
            int count = 0 ;
            while (n != 0) {
                if (n & 1 == 1) count++ ;
                n = n << 1 ;
            }
            return count ;
        }
        bool isArraySpecial(vector<int>& nums) {
            vector<int> par ;
            for (int x : nums) par.push_back(checkparity(x)) ;
            for (int i = 0 ; i < par.size() - 1; i++) {
                if (par[i] == par[i+1]) return false ;
            }
            return true ;
        }
    };