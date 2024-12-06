#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std ;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> x ;
        for (int val : banned) {
            x.insert(val) ;
        }
        vector<int> arr ;
        for (int i = 1; i <= n; i++) {
            if (x.count(i) == 0) {
                arr.push_back(i) ;
            }
        }
        int count = 0 ;
        int sum = 0 ;
        for (int i = 0; i < arr.size(); i++) {
            if (sum + arr[i] <= maxSum) {
                count++ ;
                sum += arr[i] ;
            }
        }
        return count ;
    }
};