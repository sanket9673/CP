#include <iostream>
using namespace std; 

int main() {
    int t ;
    cin >> t ;
    for (int  i = 0; i < t; i++) {
        int n, x, y ;
        int count = 0 ;
        cin >> n ;
        cin >> x >> y ;
        if (n == 0) {
            cout << 0 << endl ;
        }
        // else {
        //     int time = 0 ;
        //     while (n > 0) {
        //         if (x < y) {
        //             n-= x ;
        //         }
        //         else {
        //             n-= y ;
        //         }
        //         time++ ;
        //     }
        //     cout << time << endl ;
        // }
        else {
            int time = (n + min(x, y) - 1) / min(x, y);
            cout << time << endl;
        }
    }
    
    return 0 ;
}