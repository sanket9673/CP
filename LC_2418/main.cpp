#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int count = heights.size() ;
        while (count > 0) {
            for (int i = 0; i < heights.size() - 1; i++) {
                if (heights[i] < heights[i + 1]) {
                    swap(heights[i], heights[i+1]) ;
                    swap(names[i], names[i+1]) ;
                }
            }
            count-- ;
        }
        
        return names ;    
    }
};