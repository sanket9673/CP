#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        vector<int> arr(n);
        unordered_map<int, int> x ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
            x[arr[i]]++ ;
        }
        if (n == 2) cout << "Yes" << endl ;
        else if (x.size() > 2) cout << "No" << endl ;
        else {
            int res = 0 ;
            for (auto &val : x) res = abs(res) - val.second ;
            if (abs(res) == 1 || abs(res) == n || abs(res) == 0) cout << "Yes" << endl ;
            else cout << "No" << endl ;
        }
    }
    return 0 ;
}