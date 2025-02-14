#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n, m ;
    cin >> n >> m ;
    vector<int> res(n) ;
    for (int i = 0 ; i < n; i++) {
        cin >> res[i] ;
    }
    vector<int> res1(n, 0);
    int count = 0, val = 0 ;
    while (count != res.size()) {
        int i = 0 ;
        while (i < n) {
            if (res1[i] != -1) res1[i] += m ;
            if (res1[i] >= res[i]) {
                val = i ;
                res1[i] = -1 ;
                count++ ;
            }
            i++ ;
        }
    }
    cout << val + 1 << endl ;
    return 0 ;
}