#include <iostream>
using namespace std ;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false ;
        }
        int a[256] = {0} ;
        int b[256] = {0} ;

        for (int i = 0; i < s.length(); i++) {
            a[(s[i] - 'a')]++ ;
            b[(t[i] - 'a')]++ ;
        }

        for (int i = 0; i <256 ;i++) {
            if (a[i] != b[i]) {
                return false ;
            }
        }
        return true ;

        // if (s.length() != t.length()) {
        //     return false ;
        // }

        // sort(s.begin(), s.end()) ;
        // sort(t.begin(), t.end()) ;

        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] != t[i]) {
        //         return false ;
        //     }
        // }
        // return true ;
    }
};