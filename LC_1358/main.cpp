#include <iostream>
#include <unordered_map>
using namespace std ;

class Solution {
    public:
        int numberOfSubstrings(string s) {
            // TLE 
            // int count = 0 ;
            // for (int i = 0 ; i < s.length(); i++) {
            //     bool a = false, b = false, c = false ;
            //     for (int j = i ; j < s.length(); j++) {
            //         if (s[j] == 'a') a = true ;
            //         else if (s[j] == 'b') b = true ;
            //         else c = true ;
    
            //         if ((a & b) == true && (b & c) == true && (c & a) == true) {
            //             count += s.length() - j ;
            //             break ;
            //         }
            //         cout << count << endl ;
            //     }
            // }
            // return count ;
    
            // WRONG ANSWER
            // unordered_set<int> x ;
            // bool a = false , b = false ;
            // for (int i = 0 ; i < s.length(); i++) {
            //     if (s[i] == 'a') a = true ;
            //     else if (s[i] == 'b') b = true ;
            //     else {
            //         if (a && b) {
            //             a = false ;
            //             b = false ;
            //             x.insert(i) ;
            //             cout << i << endl ;
            //         }
            //     }
            // } 
            // cout << " " << endl ;
            // int count = 0 ;
            // for (auto &val : x) {
            //     count += s.length() - val ;
            //     cout << count << endl ;
            // }
            // return count ;
    
            // SLIDING WINDOW
            int l = 0, r = 0, count = 0 ;
            unordered_map<char, int> x = {{'a', 0}, {'b', 0}, {'c', 0}} ;
            for (int r = 0 ; r < s.length(); r++) {
                x[s[r]]++ ;
                while (x['a'] > 0 && x['b'] > 0 && x['c'] > 0) {
                    count += s.length() - r ;
                    x[s[l]]-- ;
                    l++ ;
                }
            }
            return count ;
        }
    };