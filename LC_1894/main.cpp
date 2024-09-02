#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int count = 0 ;
        long long sum = 0 ;

        while (count < chalk.size()) {
            sum += chalk[count] ;
            count++ ;
        }
        
        k %= sum ;
        count = 0 ;

        while (true) {
            if (k < chalk[count]) {
                break ;
            }
            k -= chalk[count] ;
            count++ ;

            if (count == chalk.size()) {
                count = 0 ;
            }
        }
        return count ;
    }
};