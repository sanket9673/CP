class Solution {
    public:
        int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
            // int res = INT_MAX ;
            // bool fnd = true ;
            // for (int i = 1 ; i < original.size(); i++) {
            //     int x = original[i] - original[i-1] ;
            //     int a = bounds[i-1][0] ;
            //     int b = bounds[i][0] ;
            //     int count1 = 0, count2 = 0, count = 0, smp = a + x, smp1 = b - x ;
            //     if (bounds[i][0] <= smp && smp <= bounds[i][1]) {
            //         count1 += bounds[i][1] - smp ;
            //         count2 += bounds[i-1][1] - a ;
            //         count = min(count1, count2) + 1 ;
            //     }
            //     else if (bounds[i-1][0] <= smp && smp <= bounds[i-1][1]) {
            //         count1 += bounds[i][1] - smp ;
            //         count2 += bounds[i-1][1] - a ;
            //         count = min(count1, count2) + 1 ;
            //     }
            //     else {
            //         fnd = false ;
            //         break ;
            //     }
            //     res = min(count, res) ;
            // }
            // if (fnd == true) return res ;
            // return 0 ;
            // WRONG INDEA FOR ABOVE -------------
            // HERE CALCULATED THE RANGE FOR EACH ELEMENT FROM WHERE TO WHERE IT CAN LIE THEN 
            // MAX AND MIN IS TAKEN (LIKE INTERSECTION OF RANGE)
            // 1 < x < 4 && 2 < x < 3 ================ 2 < x < 3
            vector<int> arr ;
            arr.push_back(0) ;
            for (int i = 1; i < original.size(); i++) {
                arr.push_back(original[i] - original[i-1]) ;
            }
            for (int i = 1 ; i < arr.size(); i++) {
                arr[i] += arr[i-1] ;
            }
            int lw = bounds[0][0], up = bounds[0][1];
            for (int i = 1; i < bounds.size(); i++) {
                int x = bounds[i][0], y = bounds[i][1] ;
                lw = max(lw, x - arr[i]) ;
                up = min(up, y - arr[i]) ;
            }
            if (lw > up) return 0 ;
            return up - lw + 1 ;
        } 
    };