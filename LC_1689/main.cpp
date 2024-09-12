#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[256] ;
        int res = 0 ;

        for (int i = 0; i < allowed.length(); i++) {
            arr[allowed[i]]++ ;
        }

        int count = 0 ;
        int present = 0 ;
        
        while(count < words.size()) {
            for (int i = 0; i < words[count].length(); i++) {
                if (arr[words[count][i]] == 0) {
                    break ;
                }
                else {
                    present++ ;
                }
            }
            if (present == words[count].length()) {
                res++ ;
            }
            present = 0 ;
            count++ ;
        }

        return res ;
    }
};