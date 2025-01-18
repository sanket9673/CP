#include <bits/stdc++.h>
using namespace std ;
 
int main() {
    int t ;
    cin >> t ;
    while (t--)  {
        int n, m ;
        cin >> n >> m ;
        int x[n], y[n] ;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i] ;
        }
        int ans = 0 ;
        for (int i = 0; i < n-1; i++) {
            ans += 4*m;
            int w = m - (x[i+1]) ;
            int h = m - (y[i+1]) ;
            ans -= 2 * (h + w) ;
        }
        ans += 4*m ;
        cout <<  ans << endl ;
    } 
    return 0 ;
}