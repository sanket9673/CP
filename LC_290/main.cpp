#include <iostream>
using namespace std ;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stack<string> arr ;
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) {
                res+= s[i] ;
            }
            if (isspace(s[i]) && !res.empty()) {
                arr.push(res) ;
                res = "" ;
            }
        }
        if (!res.empty()) {
            arr.push(res) ;
            res = "" ;
        }

        if (arr.size() != pattern.length()) {
            return false ;
        }

        unordered_map<char, string> x ;
        unordered_map<string, char> y ;
        for (int i = pattern.length() - 1; i >= 0; i--) {
            string st = arr.top() ;
            // one to other map
            if (x.count(pattern[i]) == 0) {
                x.insert({pattern[i], st});
            }
            else {
                string val = x[pattern[i]] ;
                if (val != st) {
                    return false ;
                }
            }

            // other to one map
            if (y.count(st) == 0) {
                y.insert({st, pattern[i]}) ;
            }
            else {
                char vt = y[st] ;
                if (vt != pattern[i]) {
                    return false ;
                }
            }
            arr.pop() ;
        }
        return true ;
    }
};