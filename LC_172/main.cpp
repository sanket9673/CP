#include <iostream>
using namespace std ;

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0 ;
        for (int i = 5; i <= n; i*=5)  {
            res += (n / i) ;
        }
        return res ;
        // long long fact = 1;
        // for (int i = 2; i <= n; i++) {
        //     fact *= i;
        // }
        // long long count = 0 ;
        // string s = to_string(fact) ;
        // for (int i = s.length() - 1; i >= 0; i--) {
        //     if (s[i] == '0') {
        //         count++ ;
        //     }
        //     else {
        //         break ;
        //     }
        // } 
        // return count ;    
        // LEADING TO RUNTIME ERROR 

        // int fact = 1;
        // for (int i = 2; i <= n; i++) {
        //     fact *= i;
        // }
        // int count2 = 0, count5 = 0 ;
        // while (fact % 2 == 0) {
        //     count2++ ;
        //     fact /= 2 ;
        // }
        // while (fact % 5 == 0) {
        //     count5++ ;
        //     fact /= 5 ;
        // }
        // return min(count2, count5) ;
        // // LEADING TO RUNTIME ERROR 
    }
};