#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std ;

class Solution {
public:
    bool isUgly(int n) {
        unordered_set<int> x = {2,3,5} ;
        vector<long long> fact ;
        
        if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n = n / 2 ;
        }
        if (n == 1) {
            return true ;
        }

        for (long long i = 3; i*i <= n; i+=2) {
            while(n % i == 0) {
                if (x.count(i) == 0) {
                    return false ;
                }
                n = n / i ;
            }
        }
        
        if (n == 1) {
            return true ;
        }
        if(n > 2) {
            if (x.count(n) == 0) {
                return false ;
            }
        }
        return true ;

    }
};