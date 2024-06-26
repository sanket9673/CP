#include <iostream>
#include <string>
using namespace std ;

int main() {
    string n;
    cin >> n ;
    long count = 0; 

    while (count < n.size()){
        if (n[count] != '1' && n[count] != '4'){
            break;
        }

        else if (n[count] == '1'){
            count++ ;
        }

        else if (n[count] == '4' && n[count - 1] == '1') {
            count++ ;
        }

        else if (n[count] == '4' && n[count - 1] == '4' && n[count - 2] == '1'){
            count++ ;
        }
        
        else{
            break ;
        }

    }

    if (count < n.size()) {
        cout << "NO" ;
    }
    else {
        cout << "YES" ;
    }
    return 0;
}