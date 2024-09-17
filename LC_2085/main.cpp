#include <iostream>
using namespace std ;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> x ;
        unordered_map<string, int> y ;
        for (const string& word : words1) {
            x[word]++;
        }

        for (const string& word : words2) {
            y[word]++;
        }

        int res = 0 ;
        for (const auto& pair : x) {
            if (pair.second == 1 && y[pair.first] == 1) {
                res++;
            }
        }

        return res ;
    }
};