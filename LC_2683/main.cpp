#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        // CIRCULAR DEPENDENCY 
        int n = derived.size() ;
        vector<int> res ;
        res.push_back(0) ; // LETS ASSUME 

        for (int i = 1 ; i < n; i++) {
            res.push_back(res[i-1] ^ derived[i-1]) ;
        }

        if (res[0] == (derived[n-1] ^ res[n-1])) {   // IF original[0]=original[1]⊕derived[1] 
            return true ;  // THEN ORIGINAL ARRAY EXISTS
        }
        else {
            return false ;
        }
    }
};