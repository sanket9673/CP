#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std ;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool arr[256] = {false} ;
        unordered_map<int, int> res ;
        unordered_map<int, int> res1 ;
        int count1, count2 = 0 ;
        for (int i = 0; i < s.length(); i++) {
            if (res.count(s[i]) == 0 ) {
                res.insert({s[i], t[i]}) ;
            }
            else {
                char val = res[s[i]] ;
                if (val != t[i]) {
                    return false;
                }
            }
        }
        for (int i = 0; i < t.length(); i++) {
            if (res1.count(t[i]) == 0 ) {
                res1.insert({t[i], s[i]}) ;
            }
            else {
                char val = res1[t[i]] ;
                if (val != s[i]) {
                    return false ;
                }
            }
        }
        return true ;
    }
};