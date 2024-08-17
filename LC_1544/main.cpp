#include <iostream>
#include <stack>
#include <algorithm>
using namespace std ;

class Solution {
public:
    string makeGood(string s) {
        stack<char> res ;
        string ans = "" ;
        
        for (int i = 0 ; i < s.length(); i++) {
            if (res.empty()) {
                res.push(s[i]) ;
            }

            else if (islower(res.top()) && isupper(s[i]) || isupper(res.top()) && islower(s[i])) {
                if (tolower(res.top()) == tolower(s[i])) {
                    res.pop() ;
                }
                else {
                    res.push(s[i]) ;
                }
            }
            else {
                res.push(s[i]) ;
            }
        }


        if (res.empty()) {
            return ans ;
        }
        else {
            while (!res.empty()) {
                // ans += res.pop() ;    x doesn't return value instead
                ans += res.top() ;
                res.pop() ;
            }
            reverse(ans.begin(), ans.end()) ;
            return ans ;
        }
    }
};