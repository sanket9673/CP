#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std ;

class Solution {
public:
    int findComplement(int num) {
        string res = "" ;
        long long result = 0 ;

        while (num > 0) {
            res += to_string(num % 2) ;
            if (num / 2 < 0) {
                res += to_string(num) ;
            }
            num = num / 2 ;
        }
        
        reverse (res.begin(), res.end()) ;
        for (int i = 0; i < res.length(); i++) {
            if (res[i] == '0') {
                res[i] = '1';
            }
            else {
                res[i] = '0';
            }
    }
        for (int i = res.length() - 1; i >= 0; i--) {
            result += (res[i] - '0') * pow(2, res.length() -1 - i) ;
        }
        if (result >= INT_MAX - 1) {
            return INT_MAX - 2 ;
        }
        return result ;
    }
};