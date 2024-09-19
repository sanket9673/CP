#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int res = 0;
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        if (arr[i] < 0) {
            res += abs(arr[i]);  
        }
    }

    cout << res << endl; 
    return 0;
}
