#include <bits/stdc++.h>
using namespace std ;

int main() {
    int k ;
    bool ans = true ;
    cin >> k ;
    string s, res ;
    cin >> s ;
    unordered_map<char , int> x ;
    for (int i = 0; i < s.length(); i++) x[s[i]]++ ;
    for (auto i : x) {
        if (i.second % k != 0) ans = false ;
    }
    for (int i = 0 ; i < k; i++) {
        for (auto val : x) {
            res += string((val.second / k), val.first) ;
            val.second -= val.second / k ;
        }
    }
    if (!ans) cout << -1 << endl ;
    else cout << res << endl ;
    return 0 ;
}