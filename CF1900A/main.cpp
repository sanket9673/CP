#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n, count = 0 ;
        bool fnd = false ;
        cin >> n ;
        string s = "" , smp = "" ;
        cin >> s ;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                count++;
                smp += s[i] ;
                if (smp == "...") {
                    fnd = true ;
                    break ;
                }
            }
            else {
                smp = "" ;
            }
        }
        if (fnd == true) {
            cout << 2 << endl ;
        }
        else {
            cout << count << endl ;
        }
    }
    
    return 0 ;
}