#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    
    while (t--) {
        int n ;
        cin >> n ;
        bool fnd = true ;
        int x = n - 2 ;
        vector<int> arr(x); 
        for (int i = 0; i < x; i++)  cin >> arr[i] ;
        
        //101
        if (x >= 3) {
            for (int i = 1; i < x - 1; i++) {
                if (arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1) {
                    fnd = false ;
                    break ;
                }
            }
        }
        
        if (fnd == true) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    
    
    return 0 ;
}