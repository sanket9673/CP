#include <iostream>
#include <string>
using namespace std ;

class Solution {
public:
    int getLucky(string s, int k) {
        string arr = "" ;
        for (int i = 0; i < s.length(); i++) {
            arr += to_string(s[i] - 'a' + 1) ;
        }

        int res = 0 ;
        for (int i = 0; i < arr.size(); i++) {
            res += arr[i] - '0' ;
        }

        k -= 1 ;

        if (k > 0) {
            
            while (k >= 1) {
                int r = 0;
                while (res > 0) {
                    r += res % 10 ;
                    res /= 10 ;
                }
                res = r ;
                k-- ;
            }
            return res ;
        }

        else {
            return res ;
        }
        
    }
};