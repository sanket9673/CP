class Solution {
public:
    int passThePillow(int n, int time) {
        int step = 1;
        int k = 1;
        while (time > 0){
            if(k==n){
                step = -1;
            }
            if(k==1){
                step = 1;
            }
            k += step;
            time -= 1;
        }
        return k;
        // int idx = 1 ;
        // int res = 1 ;
        // while (time > 0) {
        //     if (res < n) {
        //         idx++ ;
        //         res++ ;
        //     }
        //     else {
        //         idx-- ;
        //         res++;
        //         if (idx == 1) {
        //             res = 1 ;
        //         }
        //     }
            
        //     time-- ;
        // }
        // return idx ;
    }
};