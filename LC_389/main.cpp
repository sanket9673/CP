#include <iostream>
#include <string>
using namespace std ;

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int arr[256] = {0} ;
        for (int i = 0; i < s.length(); i++) {
            arr[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++) {
            arr[t[i]]-- ;
        }
        char res;
        for (int i = 0; i < 256; i++) {
            if (arr[i] < 0) {
                res = char(i) ;
            }
        }
        return res ;
    }
};