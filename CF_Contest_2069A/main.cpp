#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        vector<int> arr(n-2) ;
        for (int i = 0 ; i < n-2; i++) cin >> arr[i] ;
        bool possible = true ;
        vector<int> res(n, 1) ;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] == 1) {
                res[i] = res[i-1] ;
            }
            else res[i] = res[i-1] + 1 ;
        }
        
        for (int i = 1; i < n-1; i++) {
            if((arr[i-1] == 1 && res[i] != res[i-1]) || 
            (arr[i-1] == 0) && res[i] == res[i-1] && res[i] == res[i+1]) {
                possible = false ;
                break ;
            }
        }
        if (possible) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    return 0 ;
}