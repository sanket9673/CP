#include <iostream>
#include <string>
using namespace std ;

int main() {
    string s ;
    cin >> s ;
    int count1 = 0;
    int count2 = 0;
    
    for (int i = 0; i< s.length(); i++) {
        if (s[i] == '0') {
            count1++;
            count2 = 0 ;
            if (count1 == 7) {
                cout << "YES" ;
                break ;
            }
        }
        else if (s[i] == '1') {
            count2++;
            count1 = 0;
            if (count2 == 7) {
                cout << "YES" ;
                break ;
            }
        }
    }
    
    if (count1 < 7 && count2 < 7) {
        cout << "NO" ;
    }
    
    return 0;
}