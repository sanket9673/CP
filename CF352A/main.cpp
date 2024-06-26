#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int arr[n] ;
    int count1 = 0;
    int count2 = 0;
    int sum = 0;
    
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i] ;
    }
    
    sort(arr, arr + n);
    
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] == 0) {
            count1++ ;
        }
        else if (arr[i] == 5) {
            count2++;
        }
        sum+=arr[i] ;
    }
    
    if (count1 == 0) {
        cout << -1 << endl;
    }
    else {
        while (sum % 9 != 0 && count2 > 0) {
            sum -= 5;
            count2--;
        }
        if (sum % 9 != 0 || count2 == 0) {
            cout << 0 << endl; 
        } 
        else {
            for (int i = 0; i < count2; i++) {
                cout << 5;
            }
            for (int i = 0; i < count1; i++) {
                cout << 0;
            }
        }
    }
    
    return 0 ;
}