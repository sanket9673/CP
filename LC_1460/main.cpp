#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size() != arr.size()) {
            return false ;
        }
        sort (target.begin(), target.end());
        sort (arr.begin(), arr.end()) ;

        for (int i = 0; i < target.size(); i++) {
            if (target[i] != arr[i]) {
                return false ;
            }
        }
        
        return true ;
        
        // std::unordered_map<int, int> countMap;

        // // Count occurrences in target
        // for (int num : target) {
        //     countMap[num]++;
        // }

        // // Subtract occurrences found in arr
        // for (int num : arr) {
        //     countMap[num]--;
        // }

        // // Check if all counts are zero
        // for (const auto& pair : countMap) {
        //     if (pair.second != 0) {
        //         return false;
        //     }
        // }
        // return true ;
    }
};