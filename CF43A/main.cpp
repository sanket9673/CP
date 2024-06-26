#include <iostream>
#include <string>
using namespace std ;

int main() {
    int n; 
    int count1 = 0, count2 = 0, count3 = 0;
    cin >> n ;
    string arr[n] ;
    string s ;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    
    for (int i = 0; i < n; i++) {
        s = arr[i] ;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'A') {
                count1++ ;
            }
            else if (s[j] == 'B') {
                count2++ ;
            }
            else if (s[j] == 'C') {
                count3++ ;
            }
        }
    }
    
    if (count1 > count2 && count1 > count3) {
        cout << 'A' ;
    }
    else if (count2 > count1 && count2 > count3) {
        cout << 'B' ;
    }
    else if (count3 > count1 && count3 > count2) {
        cout << 'C' ;
    }
    else {
        cout << "ABC" ;
    }
    
    return 0 ;
}

// #include <iostream>
// #include <cmath>
// using namespace std ;

// int main() {
//     int n ;
//     cin >> n ;
//     int count1 = 0, count2 = 0, count3 = 0;
//     string arr[n] ;
//     string s ;
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i] ;
//     }
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < arr[i].size(); j++) {
//             if (arr[i][j] == 'A') {
//                 count1++ ;
//             }
//             else if (arr[i][j] == 'B') {
//                 count2++ ;
//             }
//             else if (arr[i][j] == 'C') {
//                 count3++ ;
//             }
//         }
//     }
    
//     cout << count1 << count2 << count3 << endl;
    
//     if (count1 == count2 && count2 == count3) {
//         cout << "ABC" ;
//     }
//     else if (count1 > count2 && count1 > count3) {
//         cout << 'A' ;
//     }
//     else if (count2 > count1 && count2 > count3) {
//         cout << 'B' ;
//     }
//     else {
//         cout << 'C' ;
//     }
    
//     return 0 ;
// }