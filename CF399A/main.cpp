#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count[4] = {}; // Array to count the number of 1s, 2s, and 3s

    // Count the number of 1s, 2s, and 3s
    for(char c : s) {
        if(c == '1') count[1]++;
        else if(c == '2') count[2]++;
        else if(c == '3') count[3]++;
    }

    // Construct the new sum in non-decreasing order
    string result;
    for(int i = 1; i <= 3; i++) {
        for(int j = 0; j < count[i]; j++) {
            if(!result.empty()) result += '+';
            result += to_string(i);
        }
    }

    cout << result << endl;
    return 0;
}
