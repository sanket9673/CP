#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int dist = 0 ;
        int mn = arrays[0][0] ;
        int mx = arrays[0].back() ; // To get the last element --> x arr[0][-1]

        for (int i = 1; i < arrays.size(); i++) {
            dist = max(dist, abs(mx - arrays[i][0])) ;
            dist = max(dist, abs(mn - arrays[i].back())) ;
            mn = min(mn, arrays[i][0]) ;
            mx = max(mx, arrays[i].back()) ;
        }
        return dist ;
    }
};