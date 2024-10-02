class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        for (int i = 0; i < hours.size(); i++) {
            hours[i] = hours[i] % 24; // storing remainderss
        }
        unordered_map<long, long> x ;
        for (int i = 0; i < hours.size(); i++) {
            if (x.count(hours[i]) == 0) {
                x[hours[i]] = 1 ;
            }
            else {
                x[hours[i]]++ ;
            }
        }

        long long count = 0 ;
        if (x[0] != 0) {
            count += (x[0] * (x[0] - 1)) / 2 ;
        }
        if (x[12] != 0) {
            count += (x[12] * (x[12] - 1)) / 2 ;
        }
        for (int i = 1; i < 12; i++) { // 1 to 11 remainder same from 13 to 23
                if (x[i] != 0 && x[24- i] != 0) {
                    count += (x[i] * (x[24 - i]));
                }
            }
        return count ;
    }
};