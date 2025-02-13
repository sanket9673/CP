#include <bits/stdc++.h>
using namespace std ;

int main() {
    unordered_set<char> x = {'a','e','i','o','u','A','E','I','O','U','y','Y'} ;
    string s, res ;
    cin >> s ;
    for (int i = 0 ; i < s.length(); i++) {
        if (x.count(s[i]) == 0) {
            res += "." ;
            if (isupper(s[i])) res += tolower(s[i]) ;
            else res += s[i] ;
        }
    }
    cout << res << endl ;
    
    return 0;
}