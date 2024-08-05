#include <iostream>
#include <vector>
#include <map>
using namespace std ;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> ans ;
        vector<string> res ;

        for (const string &s : arr) {
            ans[s]++ ;
        }

        for (const string &s : arr) {
            if (ans[s] == 1) {
                res.push_back(s) ;
            }
        }

        if (k > res.size()) {
            return "" ;
        }
        else {
            return res[k-1] ;
        }
        // vector<string> res ;
        // for (int i = 0; i < arr.size(); i++) {
        //     int count = 0 ;
        //     for (int j = 0; j < arr.size(); j++) {
        //         if (arr[i] == arr[j]) {
        //             count++ ;
        //         }
        //     }
        //     if (count == 1) {
        //         res.push_back(arr[i]) ;
        //     }
        // }
        // if (k > res.size()) {
        //     return "" ;
        // }
        
        // else {
        //     return res[k-1] ;
        // }
    }
};