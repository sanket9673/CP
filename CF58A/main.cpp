#include <iostream> 
#include <string>
using namespace std ;

int main() {
    string s ;
    cin >> s ;
    int hcount = 0;
    int ecount = 0;
    int lcount = 0;
    int ocount = 0;

    for (int i = 0; i < s.size() ; i++) {
        if (s[i] == 'h') {
            if (hcount < 1) {
                hcount++ ;
            }
        }

        else if (s[i] == 'e') {
            if (ecount < 1 && hcount == 1) {
                ecount++ ;
            }
        }

        else if (s[i] == 'l') {
            if (lcount < 2 && ecount == 1 && hcount == 1) {
                lcount++ ;
            }
        }

        else if (s[i] == 'o') {
            if (ocount < 1 && lcount == 2 && ecount == 1 && hcount == 1) {
                ocount++ ;
            }
        }
        
    }

    if (hcount == 1 && ecount == 1 && lcount == 2 && ocount == 1) {
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }    
    


    return 0 ;
}


/* 
aahelloasd
ashrello
*/