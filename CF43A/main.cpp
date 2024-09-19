#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
int main() {
    int n ;
    cin >> n ;
    unordered_map<string, int> x ;
    for (int i = 0; i < n; i++) {
        string team ;
        cin >> team ;
        x[team]++ ;
    }
    int maxgoal = 0 ;
    string win ;
    for (const auto& pair : x) {
        if (pair.second > maxgoal) {
            win = pair.first ;
            maxgoal = pair.second ;
        }
    }
    cout << win ;
    return 0 ; 
}