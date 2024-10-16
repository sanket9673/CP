#include <iostream>
using namespace std ;

class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long res = 0 ;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                res++ ;
            }
        }
        return res*(res+1)/2 ;
    }
};