class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mint ;
        int res = INT_MAX ;
        for (int i = 0 ; i < timePoints.size(); i++) {
            int hr = stoi(timePoints[i].substr(0,2)) ;
            int mn = stoi(timePoints[i].substr(3,2)) ;
            int time = hr * 60 + mn ;
            mint.push_back(time) ;
        }
        sort(mint.begin(), mint.end()) ;
        for (int i = 1; i < mint.size(); i++) {
            int val = mint[i] - mint[i-1] ;
            res = min(val, res) ; 
        }
        int circularDiff = 1440 - (mint.back() - mint[0]);
        res = min(res, circularDiff) ;
        return res ;
    }
};