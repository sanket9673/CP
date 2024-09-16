#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:

    static bool compareByValue(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second;
    }   

    string frequencySort(string s) {
        unordered_map<char, int> x ;
        for (int i = 0; i < s.length(); i++) {
            if (x.count(s[i]) == 0 ) {
                x[s[i]] = 1 ;
            }
            else {
                x[s[i]]++ ;
            }
        }
        string res = "" ;
        vector<pair<char, int>> vec(x.begin(), x.end());
        sort(vec.begin(), vec.end(), compareByValue);
        for (const auto& pair : vec) {
            int a = pair.second ;
            for (int i = 0; i < a; i++) {
                res += pair.first ;
            }
        }
        // for (const auto& pair : vec) {
        //     res += string(pair.second, pair.first);
        // }
        return res ;
    }
};