#include <iostream>
#include <vector>
using namespace std ;
 
int main() {
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++) {
        int n, k ;
        int gold = 0 ;
        int ppl = 0 ;
        cin >> n >> k ;
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++) {
            cin >> arr[i] ;
        } 
        
        for (int i = 0 ; i < n; i++) {
            if (arr[i] >= k) {
                gold+= arr[i] ;
            }
            else if (arr[i] == 0 && gold > 0) {
                gold-- ;
                ppl++ ;
            }
        }
        cout << ppl << endl ;
    }
    return 0 ;
}   

