#include <iostream>
using namespace std ;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && isalpha(s[i + 1])) {
                break ;
            }
            
            else if (isalpha(s[i])) {
                count++ ;
            }
        }
        return count ;
    }
};