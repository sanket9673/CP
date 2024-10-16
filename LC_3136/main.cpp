#include <iostream>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    bool isValid(string word) {
        unordered_set<char> x = {'a','e','i','o','u','A','E','I','O','U'} ;
        bool digit = false ;
        bool vowel = false ;
        int count = 0 ;
        bool consonant = false ;

        for (int i = 0; i < word.size(); i++) {
            if (isalpha(word[i])) {
                if(x.count(word[i]) != 0) {
                    vowel = true ;
                }
                else {
                    consonant = true ;
                }
                count++ ;
            }
            else if (isdigit(word[i])) {
                digit = true ; // OK is not included ex."aya" but if there increase char count
                count++ ;
            }
            else {
                return false ;
            }
        }

        if (count >= 3) {
            if (vowel == true && consonant == true) {
                return true ;
            }
            else {
                return false ;
            }
        }
        
        else {
            return false ;
        }
    }
};