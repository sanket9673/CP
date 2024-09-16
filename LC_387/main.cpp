#include <iostream>
#include <climits>
#include <vector>
#include <unordered_map>
using namespace std ;

class Solution {
public:
    int firstUniqChar(string s) {
        if (s.length() < 2) {
            return 0 ;
        }

        unordered_map<char, int> frq ;
        unordered_map<char, int> idx ;

        for (int i = 0; i < s.length(); i++) {
            if (frq.count(s[i]) == 0) {
                frq[s[i]] = 1 ;
                idx[s[i]] = i ;
            }
            else {
                frq[s[i]]++ ;
            }
        }
        int res = INT_MAX ;
        for (int i = 0; i < s.length(); i++) {
            if (frq[s[i]] == 1) {
                res = min(idx[s[i]], res) ;
            }
        }

        if (res == INT_MAX) {
            return -1;
        }
        return res ;
        
    }
};