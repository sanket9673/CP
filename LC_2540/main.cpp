class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int p = 0; 
        int q = 0;
        // TWO POINTER APPROACH (MAINTAINING TWO POINTS AT TWO ARRAYS GIVEN)
        while (p < nums1.size() && q < nums2.size()) {
            if (nums1[p] == nums2[q]) {
                return nums1[p] ;
            }
            else if (nums1[p] > nums2[q]) {
                q++ ;
            }
            else {
                p++ ;
            }
        }
        return -1 ;


        // int a = nums1.size() ;
        // int b = nums2.size() ;
        // vector<int> arr ;
        // int count = 0 ;
        // for (int i = 0; i < a; i++) {
        //     arr.push_back(nums1[i]) ;
        // }
        // for (int i = 0; i < b; i++) {
        //     arr.push_back(nums2[i]) ;
        // }
        // sort(arr.begin(), arr.end()) ;

        // for (int i = 1; i < a + b; i++) {
        //     if (arr[i] == arr[i - 1]) {
        //         return arr[i] ;
        //     }
        // }
        // return -1 ;

    }
};