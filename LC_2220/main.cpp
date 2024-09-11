#include <iostream>
#include <string>
using namespace std ;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        string s, x = "" ;
        int res = 0 ;
        // while (start > 1) {
        //     int st = start % 2 ;
        //     start /= 2 ;
        //     s += to_string(st) ;
        // }
        // s += to_string(start) ;
        // reverse(s.begin(), s.end()) ;
        
        // while (goal > 1) {
        //     int gl = goal % 2 ;
        //     goal /= 2 ;
        //     x += to_string(gl) ;
        // } 
        
        while (start > 1 || goal > 1) {
            if (start > 1) {
                int st = start % 2 ;
                start /= 2 ;
                s = to_string(st) + s;
            }
            if (goal > 1) {
                int gl = goal % 2 ;
                goal /= 2 ;
                x = to_string(gl) + x;
            }
        }
        s = to_string(start) + s;
        x = to_string(goal) + x;

        if (x.length() < s.length()) {
            x.insert(0, s.length() - x.length(), '0') ;
        }
        else {
            s.insert(0, x.length() - s.length(), '0') ;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != x[i]) {
                res++ ;
            }
        }
        return res ;
    }
};