#include <iostream>
#include <stack>
using namespace std ;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> arr ;
        string res = "" ;
        string demo = "" ;
        for (int i = 0; i < s.length(); i++) {

            if (isspace(s[i])) {
                if (demo != "") {
                    arr.push(demo) ;
                    demo = "" ;
                }
            }
            
            if (!isspace(s[i])) {
                demo += s[i] ;
            }
        }
        if (demo != "") {
            arr.push(demo) ;
        }

        while (!arr.empty()) {
            res += arr.top();
            arr.pop() ;
            if (!arr.empty()) {
                res += " " ;
            }
        }
        
        return res ;
    }
};