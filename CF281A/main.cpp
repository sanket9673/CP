#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(islower(s[0])){
        char c = s[0];
        c = toupper(c);
        s[0] = c;
        cout << s ;
    }
    else{
        cout << s;
    }
}