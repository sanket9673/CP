#include <iostream>
using namespace std ;

int main() {
    int n;
    cin >> n ;
    int arr[n][3];
    int count = 0 ;
    int count1 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j] ;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if ( arr[i][0] == 1 && arr[i][1] == 1){
            count++ ;
        }
        else if ( arr[i][1] == 1 && arr[i][2] == 1){
            count++ ;
        }
        else if ( arr[i][0] == 1 && arr[i][2] == 1){
            count++ ;
        }
        else if ( arr[i][0] == 1 && arr[i][2] == 1 && arr[i][3] == 1) {
            count++ ;
        }
    }
    cout << count ;
        
    return 0 ;
}
