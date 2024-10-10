#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std ;

class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = (int)sqrt(c) ;
        if (n*n == c){
            return true ;
        } 
        else {
            int l = 0 ;
            int r = n ;
            while (l <= r) {
                long long sum = (long long)l * l + (long long)r * r ;
                if (sum == c) {
                    return true ;
                }
                else if (sum > c) {
                    r-- ;
                }
                else {
                    l++ ;
                }
            }
            return false ;
        }
    }
};