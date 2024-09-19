#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main() {
    vector<int> arr ;
    int res = 0 ;
    int n, m ;
    cin >> n >> m ;
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i] ;
    }
    
    for (int i = 0 ; i < m; i++) {
        res+= arr[i] ;
    }
    
    return res ;
}