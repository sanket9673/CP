#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n, mx = 0 ;
        cin >> n ;
        vector<int> arr(n), res(n) ;
        for (int i = 0; i < n; i++) cin >> arr[i] ;
        res = arr ;
        sort(res.begin(), res.end()) ;
        mx = res[n-1] ;
        if (arr == res) cout << "YES" << endl ;
        else {
            int mn = *min_element(arr.begin(), arr.end()) ;
            if (mn != arr[0]) cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
    }
    return 0 ;
}