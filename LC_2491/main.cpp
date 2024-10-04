#include <iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end()) ;
        int p = 0 ;
        int q = skill.size() - 1 ;
        int sum = skill[p] + skill[q];
        if (skill.size() < 3) {
            return skill[p] * skill[q] ;
        }
        // unordered_map<long long, int> x ;
        // while (p < q) {
        //     if (skill[p] + skill[q] != sum) {
        //         return -1 ;
        //     }
        //     if (x.count(skill[p]) == 0) {
        //         x.insert({skill[p] * skill[q], 1}) ;
        //     }
        //     else {
        //         x[skill[p] * skill[q]]++ ;
        //     }
            
        //     p++ ;
        //     q-- ;
        // }
        // long long res = 0 ;
        // for (const auto& pair : x) {
        //     res += (pair.first) * (pair.second) ;
        // }
        // return res ;
        long long res = 0 ;
        while (p < q) {
            if (skill[p] + skill[q] != sum) {
                return -1;
            } 
            res += skill[p] * skill[q] ;
            p++ ;
            q-- ;
        }
        return res ;
    }
};