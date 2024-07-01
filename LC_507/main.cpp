#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std ;

class Solution {
public:
    bool checkPerfectNumber(int num){
        int sum = 0 ;

        if (num == 1) {
            return false ;
        }

        else {
            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    sum += i;
                    if (i != num / i && i != 1) {
                        sum += num / i ;
                    }
                }
            }

            if (sum == num) {
                return true ;
            }
            
            else {
                return false ;
            }
        }
    }
};