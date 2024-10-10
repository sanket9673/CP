#include <iostream>
#include <algorithm>
using namespace std ;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber ;
        string res = "";
        while (n > 0) {
            if (n % 26 == 0) {
                res += 'Z' ;
                n = (n/26) - 1 ; //Representing a full cycle is completed 
            }
            else {
                res += (char)((n % 26) + 64);
                n /= 26; 
            }
        }
        reverse(res.begin(), res.end()) ;
        return res ;
    }
};