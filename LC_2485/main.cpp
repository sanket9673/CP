#include <iostream>
using namespace std ;

class Solution {
public:
    int pivotInteger(int n) {
        int arr[n] ;
        int pref[n] ;
        int sum = 0 ;
        int res ;
        for (int i = 0 ; i < n; i++) {
            arr[i] = i + 1 ;
            sum += arr[i] ;
        }
        pref[0] = arr[0] ;

        for (int i = 1; i < n; i++) {
            pref[i] = arr[i] + pref[i-1] ;
        }

        for (int i = 0; i < n; i++) {
            if (pref[i] == sum - pref[i] + arr[i]) {
                return arr[i] ;
            }
        }
        return -1 ;
    }
};