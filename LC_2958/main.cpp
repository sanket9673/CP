class Solution {
    public:
        int maxSubarrayLength(vector<int>& nums, int k) {
            int res = 0 , smp = 0, p = 0 ;
            unordered_map<int, int> x ;
            for (int i = 0; i < nums.size() ; i++) {
                x[nums[i]]++ ;
                smp++ ;
    
                while (x[nums[i]] > k) {
                    x[nums[p]]--; 
                    smp--;
                    p++; 
                }
                res = max(res, smp) ;
            }
           return res ;
        }
    };