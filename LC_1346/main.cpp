#include <iostream>
using namespace std ;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // sort(arr.begin(), arr.end(), greater<int>()) ;
        // for (int i = 0; i < arr.size() - 1; i++) {
        //     int res = arr[i] ;
        //     for (int j = i+1; j < arr.size(); j++) {
        //         int current = arr[j] * 2 ;
        //         if (res == current) {
        //             return true ;
        //         }
        //         else if (res > current) {
        //             break ;
        //         }
        //     }
        // }
        // return false ;
        unordered_set<int> x ;
        int count0 = 0 ;
        for (int val : arr) {
            if (val == 0) {
                count0++ ;
            }
            x.insert(val) ;
        }
        if (count0 > 1) {
            return true ;
        } 
        else {
            for (int i = 0 ; i < arr.size(); i++) {
                int res = arr[i] * 2 ;
                if (res == 0) {
                    continue ;
                }
                else if (x.count(res) != 0) {
                    return true ;
                }
            }
        }
        return false ;
    }
};