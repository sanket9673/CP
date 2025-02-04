class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = INT_MIN, x = nums[0], d = nums[0] ;
        for (int i = 1; i < nums.size(); i++) {
            if (x < nums[i]) {
                d += nums[i] ;
                x = nums[i] ;
            }
            else {
                x = nums[i] ;
                res = max(d, res) ;
                d = nums[i] ;
            }
        }
        res = max(d, res) ;
        return res ;
    }
};