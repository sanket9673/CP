#include <iostream>
using namespace std ;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0 ;
        }
        else if (n <= 2) {
            return 1 ;
        }
        int a = 0 ;
        int b = 1 ;
        int c = a + b ;
        int res ; 
        for (int i = 3; i <= n; i++) {
            res = a + b + c ;
            a = b ;
            b = c ;
            c = res ;
        }
        return res ;
    }
};