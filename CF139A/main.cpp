#include <iostream>
using namespace std ;

int main() {
    int n ;
    int arr[7] ;
    cin >> n ;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i] ;        
    }
    
    int count = 0;
    int i = 0;
    
    while (true) {
        count += arr[i % 7]; 
        if (count >= n) {
            cout << (i % 7) + 1; 
            break;
        }
        i++;
    }
    
    return 0 ;
}