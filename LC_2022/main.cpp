#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m, vector<int>(n, 0));

        if (original.size() == m * n) {
            int p = 0 ;
            for (int j = 0; j < m && p < original.size() ; j++) {
                for (int k = 0 ; k < n && p < original.size() ; k++) {
                    res[j][k] = original[p] ; 
                    p++ ;
                }
            }
            return res ;
        }
        else {
            return vector<vector<int>>() ;
        }
        
    }
};