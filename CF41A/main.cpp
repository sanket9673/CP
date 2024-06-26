#include <iostream>
#include <vector>
#include <string>
using namespace std ;

int main() {
    string s, t ;
    cin >> s ;
    cin >> t ;
    int count = 0;

    for (int i=0; i < s.size() ; i++) {
        if ( s[i] == t[(s.size()-1) - i] ) {
            count++ ;
        }
        else {
            break;
        }
    }

    if (count == s.size()){
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }

    return 0 ;
}