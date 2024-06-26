#include <iostream>
#include <string>
using namespace std ;

int main() {
    string s1;
    cin >> s1 ;
    string s2;
    cin >> s2 ;
    int n = s1.size();
    int n1 = s2.size() ;
    if (n == n1) {
        s1[n] = false ;
        for (int i = 0; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                if (s1[i] == s2[j] && s1[i] == false) {
                    s1[i] = true ;
                }
                else {
                    continue;
                }
            }
        }
        if (s1[n] == true) {
            cout << "YES" ;
        }
        else {
            cout << "NO" ;
        }
    }
    else {
        cout << "NO" ;
    }
    
    
    
    return 0 ;
}