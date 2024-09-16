#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    static bool compare(const pair<string, int> a, const pair<string, int> b) {
        if (a.second == b.second) {
            return a.first < b.first ;
        }
        return a.second > b.second ;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> x ;
        for (const auto& word : words) {
            if (x.count(word) == 0) {
                x[word] = 1 ;
            }
            else {
                x[word]++ ;
            }
        }

        vector<string> res ;
        vector<pair<string, int>> vec(x.begin(), x.end()) ;
        sort(vec.begin(), vec.end(), compare) ;
        int sz = 0 ;
        
        for (const auto& pair : vec) {
            res.push_back(pair.first) ;
            sz++ ;
            if (sz == k) {
                break ;
            }
        }
        return res ;
    }
};