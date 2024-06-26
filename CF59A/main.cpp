#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    for(int i=0; i< s.size(); i++){
        char c = s[i] ;
        if (islower(c)) {
            lower++;
        } else if (isupper(c)) {
            upper++;
        }
    }

    if (lower >= upper){
        for (char& c : s){
            c = tolower(c);
        }
    }
    else {
        for (char& c : s){
            c = tolower(c);
        }
    }

    cout<< s ; 

    return 0;
}
