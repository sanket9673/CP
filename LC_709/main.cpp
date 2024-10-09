#include <iostream>
using namespace std ;

class Solution {
public:
    string toLowerCase(string s) {
        string res = "" ;
        for (int i = 0 ; i < s.length(); i++) {
            char c = tolower(s[i]);
            res += c ;
        }
        return res ;
    }
};