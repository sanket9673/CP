#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "" ;
        string res1 = "" ;
        int mx = max(a.length(), b.length()) ;
        int mn = min(a.length(), b.length()) ;
        int flag = 0 ;

        for (int i = 0; i < mn; i++) {
            if(a[a.length() - 1 - i] == '1' && b[b.length() - 1 - i] == '1') {
                if (flag == 0) {
                    res += '0' ;
                    flag = 1 ;
                }
                else {
                    res += '1' ;
                    flag = 1 ;
                }
            }
            else if(a[a.length() - 1 - i] == '0' && b[b.length() - 1 - i] == '1' || a[a.length() - 1 - i] == '1' && b[b.length() - 1 - i] == '0' ) {
                if (flag == 0) {
                    res += '1' ;
                    flag = 0 ;
                }
                else {
                    res += '0' ;
                    flag = 1;
                }
            }
            else {
                if (flag == 0) {
                    res += '0' ;
                }
                else {
                    res += '1' ;
                    flag = 0 ;
                }
            }
        }

        reverse(res.begin(), res.end()) ;
        
        if (a.length() > b.length()) {
            for (int i = mn; i < mx; i++) {
                if (flag == 1) {
                    if (a[mx - 1 - i] == '1') {
                        res1 += '0' ;
                        flag = 1 ;
                    }
                    else {
                        res1 += '1' ;
                        flag = 0 ;
                    }
                }
                else {
                    res1 += a[mx - 1 - i] ;
                }
            }
            if (flag == 1) {
                res1 += '1' ;
                flag = 0 ;
            }   
        }
        else {
            for (int i = mn; i < mx; i++) {
                if (flag == 1) {
                    if (b[mx - 1 - i] == '1') {
                        res1 += '0' ;
                        flag = 1 ;
                    }
                    else {
                        res1 += '1' ;
                        flag = 0 ;
                    }
                }
                else {
                    res1 += b[mx - 1 - i] ;
                }
            } 
            if (flag == 1) {
                res1 += '1' ;
                flag = 0 ;
            }  
        }
        
        reverse(res1.begin(), res1.end()) ;
        res = res1 + res ;
        return res ;
    }
};