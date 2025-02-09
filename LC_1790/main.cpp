#include <iostream>
using namespace std ;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true ;

        vector<int> arr(256, 0) ;
        int count = 0 ;
        for (int i = 0; i < s1.size(); i++) {
            arr[s1[i]]++ ;
            arr[s2[i]]-- ;
            if (s1[i] != s2[i]) count++ ;
            if (count > 2) return false ;
        }
        for (int x : arr) {
            if (x != 0) {
                return false ;
            }
        }
        return true ;
    }
};