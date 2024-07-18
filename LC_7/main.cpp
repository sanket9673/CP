#include <iostream>
using namespace std ;

class Solution {
public:
    int reverse(int x) {
        int a = INT_MIN ;
        int b = INT_MAX ;

        //negation of INT_MIN is undefined in the context of a 32-bit integer.
        // Negating -2147483648 results in 2147483648 (as it exceeds INT_MAX which is 2147483647).
        if (x == a) {
            return 0;
        }
        bool stat = false;
        if (x < 0) {
            stat = true;
            x = -x;
        }
        string s = to_string(x);
        string st = "";
        for (int i = 0; i < s.length(); i++) {
            st += s[s.length() - 1 - i];
        }
        long long i = 0;
        for (char c : st) {
            if (c >= '0' && c <= '9') {
                i = i * 10 + (c - '0'); 
                // substracting ASCII value of '0' form character to get digit like
                // '1' - '0' = 49 - 48 === 1(di)
            }
        }
        if (i > b) {
            return 0;
        }

        if (stat) {
            return -i;
        } else {
            return i;
        }
    }
};
