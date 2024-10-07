class Solution {
public:
    static int zeroOccur(vector<int>& nums, int k) {
        int prod = 1 ;
        for (int i = 0; i < k; i++) {
            prod *= nums[i] ;
        }
        for (int i = k + 1; i < nums.size(); i++) {
            prod *= nums[i] ;
        }
        return prod ;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        int prod = 1 ;
        for (int val : nums) {
            prod *= val ;
        }
        vector<int> res ;
        for (int i = 0; i < n; i++) {
            int val ;
            if (nums[i] != 0) {
                val = prod / nums[i] ;
            }
            else {
                val = zeroOccur(nums, i) ;
            }
            res.push_back(val) ;
        }
        return res ;
    }
};