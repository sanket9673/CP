#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std ;

class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int, int> x ;
        int res = INT_MIN ;
        for (int i = 0 ; i < arr.size(); i++) {
            x[arr[i]]++ ;
        }
        for (const auto& pair : x) {
            if (pair.first == pair.second) {
                res = max(res, pair.first) ;
            }
        }
        return (res != INT_MIN) ? res : -1 ;
        
    }
};