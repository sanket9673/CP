class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) {
            return false ;
        }
        int val1 = INT_MAX ;
        int val2 = INT_MAX ;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= val1) {
                val1 = nums[i] ;
            }
            if (nums[i] > val1 && nums[i] <= val2) {
                val2 = nums[i] ;
            }
            if (nums[i] > val2 && nums[i] > val1) {
                return true ;
            }
        }
        return false ;
    }
};