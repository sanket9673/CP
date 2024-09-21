#include <iostream>
#include <vector>
using namespace std ;
 
int main() {
    int t ;
    cin >> t ;
    for (int r = 0; r < t; r++) {
        int n, k ;
        cin >> n >> k ;
        if (k == 1) {
            if ((n*n) % 2 == 0) {
                cout << "YES" << endl ;
            }
            else {
                cout << "NO" << endl ;
            }
        }
        else {
            long long start = n - k + 1;
            long long end = n;
            long long countodd = (end + 1) / 2 - start / 2;
            // long long a = n ;
            // long long b = n + k - 1 ;
            // int countodd = 0 ; 
            // for (int i = a; i <= b; i++) {
            //     if (i % 2 != 0) {
            //         countodd++ ;
            //     }
            // }
            if (countodd % 2 == 0) {
                cout << "YES" << endl ;
            }
            else {
                cout << "NO" << endl ;
            }
        }
    } 
    return 0 ;
}