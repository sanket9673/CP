#include <bits/stdc++.h>
using namespace std ;
 
int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n, k ;
        cin >> n >> k ;
        vector<int> res(n), nums(n) ;
        for (int i = 0 ; i < n; i++) cin >> res[i] ;
        nums = res ;
        sort(nums.begin(), nums.end()) ;
        if (k == 1) {
            if (nums == res) cout << "YES" << endl ;
            else cout << "NO" << endl ;
        }
        else {
             cout << "YES" << endl ;
        }
 
    }
    return 0 ;
}