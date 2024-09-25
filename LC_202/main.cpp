#include <iostream>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<long long> x ;
        while (x.count(n) == 0) {
            x.insert(n) ;
            int sum = 0 ;
            while(n > 0) {
                int a = n % 10 ;
                sum += a * a ;
                n = n / 10 ;
            }
            if (sum == 1) {
                return true ;
            }
            n = sum ;
        } 
        return false ;
    }
};