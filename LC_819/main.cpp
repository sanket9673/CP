#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <climits>
using namespace std ;

class Solution {
    public:
        string mostCommonWord(string paragraph, vector<string>& banned) {
            unordered_set<string> x ;
            unordered_map<string, int> y ;
            for (string s : banned) x.insert(s) ;
    
            string s = "" ;
            for (int i = 0 ; i < paragraph.length(); i++) {
                if (isalpha(paragraph[i])) {
                    s += tolower(paragraph[i]) ;
                }
                else {
                    if (x.count(s) == 0 && !s.empty()) {
                        y[s]++ ;
                    }
                    s = "" ;
                }
            }
            
            if (!s.empty()) {
                if (x.count(s) == 0) {
                        y[s]++ ;
                    }
            }
    
            string res = "" ;
            int mx = INT_MIN ;
            for (auto &val : y) {
                if (mx < val.second) {
                    mx = val.second ;
                    res = val.first ;
                }
            }
            return res ;
        }
    };