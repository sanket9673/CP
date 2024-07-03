class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()) ;
        int count = 0;
        // [1,1,1,2,2,2,2] == 7 == 7 / 2 == 3 >
        int mx = 1 ;
        int i = 0 ;
        while (i < nums.size() - 1) {
            if (nums[i] == nums[i + 1]) {
                mx++ ;
            }
            else {
                mx = 1 ;
            }
            count = max(count , mx) ;
            i++ ;
        }

        if (nums.size() == 1) {
            return nums[0] ;
        }
        else {
            return nums[count - 1] ;
        }
    }
};