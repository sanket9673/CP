#include <iostream>
using namespace std ;

class Solution {
    public:
        string getHint(string secret, string guess) {
            unordered_map<char, int> x ;
            // unordered_map<char, int> y ;
            int res1 = 0, res2 = 0 ;
            for (char c : secret) x[c]++ ;
            // for (char c : guess) y[c]++ ;
    
            for (int i = 0; i < secret.length(); i++) {
                if (secret[i] == guess[i]) {
                    res1++ ;
                    x[secret[i]]--;
                }
            }
            for (int i = 0 ; i < guess.length(); i++) {
                if (secret[i] != guess[i] && x[guess[i]] > 0) {
                        res2++ ;
                        x[guess[i]] -- ;
                    }
            }
    
            string a = to_string(res1) , b = to_string(res2) ;
            return (a + "A" + b + "B") ;
        }
    };