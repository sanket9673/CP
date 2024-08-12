#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true ;
        }
        
        string str = "" ;
        string res ;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                str += s[i] ;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                str += tolower(s[i]) ;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                str += s[i];
            }
        }

        res = str ;
        reverse(res.begin(), res.end()) ;

        if (str == res) {
            return true ;
        }
        
        else {
            return false ;
        }
    }
};