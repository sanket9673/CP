#include <iostream>
using namespace std ;

class Solution {
public:
    static bool compare(char &a, char& b) {
        return a > b ;
    }

    long long smallestNumber(long long num) {
        if (num == 0) {
            return 0 ;
        }
        vector<char> arr ;
        bool val = false ;
        if (num < 0) {
            val = true ;
            num = abs(num) ;
        }
        string s = to_string(num) ;
        for (int i = 0; i < s.length(); i++) {
            arr.push_back(s[i]) ;
        }

        int idx = 0 ;
        long long res = 0 ;
        if (val == false) {
            sort(arr.begin(), arr.end()) ;
            for(int i = 0; i < arr.size(); i++) {
                if (arr[i] == 0) {
                    idx = i ;
                    break ;
                }
            }

            if (arr[0] == '0') {
                for (int i = 1; i < arr.size(); i++) {
                    if (arr[i] != '0') {
                        swap(arr[0], arr[i]);
                        break;   // we just have to take all 0's from 1st index 
                    }
                }
            }
            
            int count = 0 ;
            while (count < arr.size()) {
                res = res * 10 + (arr[count] - '0') ;
                count++ ;
            }
            return res ;
        }
        
        else {
            sort(arr.begin(), arr.end(), compare) ;  //already in decreasing order
            int count = 0 ;
            while (count < arr.size()) {
                res = res * 10 + (arr[count] - '0') ;
                count++ ;
            }

            return -res ;
        }
    }
};