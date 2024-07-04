#include <iostream>
using namespace std ;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res ;
        for (auto word : words) {
            res = word ;
            reverse(res.begin(), res.end()) ;
            if (word == res) {
                return res ;
            }
        }
        return "";
    }
};