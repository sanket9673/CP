#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++){
        int n;
        cin >> n;
        vector<int> res(n);
        vector<int> arr(n);
        
        for (int j = 0; j < n; j++) {
            cin >> res[j];
            arr[j] = res[j]; 
        }
        
        sort(arr.begin(), arr.end());
        int mn = arr[0] ;

        if (res == arr) {
            cout << 0 << endl; 
        } else {
            int mx = 0;
            
            for (int i = 0; i < n; i++) {
                if (arr[i] != res[i]) {
                    mx = max(res[i], mx); 
                }
            }
            cout << mx + mn << endl; 
        }
    }
    return 0; 
}
