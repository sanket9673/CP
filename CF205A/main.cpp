#include<iostream>
#include<string>
using namespace std ;

int main() {
    int n;
    cin >> n;
    int arr[n] ;
    int duplicate = 0 ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    int smallest = 0 ;
    for(int i = 1; i < n; i++) {
        if(arr[smallest] >= arr[i]) {
            smallest = i ;
        }
        else {
            continue;
        }
    }
    
    for(int i = 0 ; i < n; i++) {
        if(i != smallest) {
            if (arr[smallest] == arr[i]) {
                duplicate++;
            }
        }
    }

    if(duplicate == 0) {
        cout << smallest + 1;
    }
    else {
        cout << "Still Rozdil" ;
    }

    return 0;
}
//20
// 3 3 6 9 8 2 4 1 7 3 2 9 7 7 9 7 2 6 2 7