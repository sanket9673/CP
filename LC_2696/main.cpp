#include <iostream>
#include <stack>
using namespace std ;

class Solution {
public:
    int minLength(string s) {
        stack<char> x ;
        for (int i = 0; i < s.length(); i++) {
            if (x.empty()) {
                x.push(s[i]) ;
            }
            else if (s[i] == 'B' && x.top() == 'A' || s[i] == 'D' && x.top() == 'C') {
                x.pop() ;
            }
            else {
                x.push(s[i]) ;
            }
        }
        // int count = 0 ;
        // while (!x.empty()) {
        //     x.pop() ;
        //     count++ ;
        // }
        // return count ;
        return x.size() ;
    }
};