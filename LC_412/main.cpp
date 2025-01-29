#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std ;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for (int i = 1; i <= n; ++i) {
            string x = "" ;
            if (i % 3 == 0) {
                x += "Fizz";
            } 
            if (i % 5 == 0) {
                x += "Buzz";
            } 
            if (x == "") {
                x += to_string(i) ;
            }
            res.push_back(x) ;
        }
        return res;
    }
};
