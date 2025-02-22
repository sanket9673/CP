#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while (t--) {
        int n,x,res = 0 ;
        cin >> n >> x ;
        vector<int> nums(n) ;
        for (int i = 0 ; i < n; i++) cin >> nums[i] ;
        for (int i = 0 ; i < n; i++) {
            if (i == 0) res = max(res, nums[i] - 0) ;
            else {
                res = max(res, nums[i] - nums[i-1]) ;
            }
        }
        res = max(res, 2*(x - nums[n-1])) ;
        
        cout << res << endl ;
    }
    return 0 ;
}