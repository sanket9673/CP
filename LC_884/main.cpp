#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
using namespace std ;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stack<string> stk1, stk2 ;
        string res = "" ;
        for(int i = 0; i < s1.length(); i++) {
            if(isalpha(s1[i])) {
                res+= s1[i] ;
            }
            else {
                stk1.push(res) ;
                res = "" ;
            }
        }

        if(!res.empty()) {
            stk1.push(res) ;
            res = "" ;
        }

        for(int i = 0; i < s2.length(); i++) {
            if(isalpha(s2[i])) {
                res+= s2[i] ;
            }
            else {
                stk2.push(res) ;
                res = "" ;
            }
        }

        if(!res.empty()) {
            stk2.push(res) ;
            res = "" ;
        }

        unordered_map<string, int> x ;
        while (!stk1.empty()) {
            x[stk1.top()]++ ;
            stk1.pop();
        }
        while (!stk2.empty()) {
            x[stk2.top()]++ ;
            stk2.pop();
        }

        vector<string> result ;
        for (const auto& pair : x) {
            if(pair.second == 1) {
                result.push_back(pair.first) ;
            }
        }
        return result ;
    }
};