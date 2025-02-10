#include <iostream>
using namespace std ;

class Solution {
    public:
        string clearDigits(string s) {
            stack<char> x ;
            string res = "" ;
            for (int i = 0 ; i < s.length(); i++) {
                if (!isdigit(s[i]))   x.push(s[i]) ;
                else {
                    if (x.empty()) continue ;
                    else x.pop() ;
                }
            }
            while (!x.empty()) {
                res = x.top() + res;
                x.pop() ;
            }
            return res ;
        }
    };