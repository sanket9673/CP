class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() < 2) {
            return nums[0] ;
        }
        int mn = nums[0] ;
        for (int i = 1; i < nums.size(); i++) {
            mn = min(mn, nums[i]) ;
        }
        return mn ;
    }
};