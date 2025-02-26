#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std ;

class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end()) ;
        
            int a = meetings[0][0], b = meetings[0][1] ;
            for (int i = 1; i < meetings.size(); i++) {
                if (meetings[i][0] <= b) {
                    b = max(b, meetings[i][1]) ;
                }
                else {
                    days -= (b - a + 1) ;
                    a = meetings[i][0] ;
                    b = meetings[i][1] ;
                }
            }
            days -= (b - a + 1) ;
            return days ;
        }
    };