#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0 ;
        }
        int count = 0 ;
        vector<bool> isprime(n, true) ;
        // for (int i = 2; i*i < n; i++) {
        //     if(isprime[i] == true) {
        //         for(int j = 2*i; j < n; j+=i) {
        //             isprime[j] = false ;
        //         }
        //     }
        // }
        // for(int i = 2; i < n; i++) {
        //     if(isprime[i] == true) {
        //         count++ ;
        //     }
        // }
        // return count ;

        for (int i = 2; i*i < n; i++) {
            if (isprime[i] == true) {
                for (int j = i*i; j < n ; j+=i) {
                    isprime[j] = false ;
                }
            }
        }
        for (int i = 2; i < n; i++) {
            if (isprime[i]) {
                count++;
            }
        }

        return count;
    }
};