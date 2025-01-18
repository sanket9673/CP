class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size() ;
        int mx = INT_MIN ;
        for (int i = 1 ; i < n ; i++) {
            int x = nums[i - 1] - nums[i] ;
            x = abs(x) ;
            mx = max(mx, x) ;
        }
        int x = nums[n-1] - nums[0] ;
        x = abs(x) ;
        mx = max(mx, x) ;
        return mx ;
    }
};