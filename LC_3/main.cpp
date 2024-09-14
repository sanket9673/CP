#include <iostream>
using namespace std ;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() < 2) {
            return s.length() ;
        }
        int res = 0 ;
        for (int i = 0; i < s.length(); i++) {
            bool arr[256] = {false} ;
            for (int j = i; j < s.length(); j++) {
                if (arr[s[j]] == true) {
                    break ;
                }
                else {
                    res = max(res, j-i+1) ;
                    arr[s[j]] = true ;
                }
            }
        }
        return res ;


    //     int res = 0 ;
    //     int old = 0 ;
    //     bool arr[256] = {false} ;
    //     for (int i = 0; i < s.length(); i++) {
    //         if (arr[s[i]] == false) {
    //             arr[s[i]] = true ;
    //             old++ ;
    //         }
    //         else {
    //             old = 0 ;
    //             arr[s[i]] = false ;
    //         }
    //         res = max(old, res);
    //     }
    //     return res ;
    }
};

