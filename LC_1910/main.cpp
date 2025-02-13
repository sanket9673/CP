#include <iostream>
#include <stack>
using namespace std ;

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            // int p = 0, q = part.length() ;
            // while (q < s.length()) {
            //     string match = "" ;
            //     for (int i = p; i < q; i++) match += s[i] ;
            //     if (match == part) s.erase(p, q+1) ;
            //     p++ ;
            //     q++ ;
            // }
            // return s ;
            
        // THIS CAN ALSO BE SOLVED USING STRING substr ....eg) res.substr(position) == part then removing it
        int p = part.length() ;
        stack<char> x ;
        if (s.length() < part.length()) return s ;

        for (int i = 0 ; i < s.length(); i++) {
            x.push(s[i]) ;
            if (x.top() == part[p - 1]) {
                string match = "" ;
                bool found = false ;
                while (!x.empty()) {
                    match = x.top() + match ;
                    x.pop() ;
                    if (match == part) {
                        found = true ;
                        break ;
                    } 
                }
                if (found == false) {
                    for (int k = 0 ; k < match.size(); k++) x.push(match[k]) ;
                }
            }
        }
        
        
        string res = "" ;
        while (!x.empty()) {
            res = x.top() + res ;
            x.pop() ;   
        }
        return res ;
    }
};