#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    int maximumSwap(int num) {
        string res = to_string(num) ;
        int n = res.size() ;
        vector<int> last(10, -1) ;
        for (int i = 0 ; i < n; i++) {
            last[res[i] - '0'] = i ;
        }
        
        for (int i = 0 ; i < n ; i++) {
            for (int d = 9 ; d > res[i] - '0'; d--) {
                if (last[d] > i) {
                    swap(res[i], res[last[d]]) ;
                    return stoi(res) ;
                }
            }
        }

        return num ;
    }
};