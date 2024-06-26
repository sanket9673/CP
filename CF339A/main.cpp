#include <iostream>
#include <string>
using namespace std ;

int main() {
    string s ;
    cin >> s ;
    int temp ;
    if(s.length() == 1) {
        cout << s ;
    }
    else {
        for (int i =0 ; i < s.length(); i++) {
            for (int j = 0 ; j < s.length() - 2; j++) {
                if (s[j] > s[j+2]) {
                    temp = s[j] ;
                    s[j] = s[j+2] ;
                    s[j+2] = temp ;
                }
                else {
                    continue ;
                }
            }
        }
    cout << s ;
    }
    
    return 0 ;
}