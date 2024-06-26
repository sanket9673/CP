#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool result = false;

    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') { // Check for output-producing instructions
            result = true;
            break;
        }
    }

    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
