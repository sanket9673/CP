#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std ;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        // char arr1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        // char arr2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        // char arr3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
 
        // unordered_set<char> a1(arr1, arr1+10) ;
        // unordered_set<char> a2(arr2, arr2+9) ;
        // unordered_set<char> a3(arr3, arr3+7) ;

        // vector<string> res ;
        // for (int i = 0; i < words.size(); i++) {
        //     int ct = 0 ;
        //     for (int k = 0; k < words[i].size(); k++){
        //         if (a1.count(words[i][k]) == 1) {
        //             ct += 1 ;
        //         }
        //         if (a2.count(words[i][k]) == 1) {
        //             ct += 2 ;
        //         }
        //         if (a3.count(words[i][k]) == 1) {
        //             ct += 3 ;
        //         }
        //     }

        //     if (ct == words[i].size() || ct == words[i].size() * 2 || ct == words[i].size() * 3) {
        //         res.push_back(words[i]) ;
        //     }
        // }

        // return res ;

        char arr1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        char arr2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        char arr3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};

        unordered_map<char, int> x ;
        for(char c : arr1) {x[c] = 1; }
        for(char c : arr2) {x[c] = 2; }
        for(char c : arr3) {x[c] = 3; }

        vector<string> res ;

        for (string word : words) {
            bool valid = true ;
            int idx = x[word[0]] ;
            for (int i = 1; i < word.length(); i++) {
                if (x[word[i]] != idx) {
                    valid = false ;
                    break ;
                }
            }
            if (valid == true) {
                res.push_back(word) ;
            }
        }

        return res ;

    }
};