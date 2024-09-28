#include <iostream>
#include <climits>
#include <vector>
using namespace std ;

class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        if (maximumHeight.size() < 2) {
            return maximumHeight[0] ;
        }
        
        sort(maximumHeight.begin(), maximumHeight.end(), greater<long>());
        long long prev = INT_MAX;
        long long total = 0;

        for(int i = 0; i<maximumHeight.size(); i++){
            if (maximumHeight[i] < prev){
                prev = maximumHeight[i];
                total += prev;
            }
            else{
                prev -= 1;
                if (prev <= 0){
                    return -1;
                }
                total += prev;
            }
        }
        return total;
    }
};