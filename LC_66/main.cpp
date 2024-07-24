class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size() ;
        if (digits[sz - 1] < 9) {
            digits[sz - 1] += 1 ;
            return digits ;
        }

        else {
            digits[sz - 1] = 0 ;
            int flag = 1 ;
            for (int i = sz - 2; i >= 0; i--) {
                if (digits[i] + flag <= 9) {
                    digits[i] += flag ;
                    break ;
                }
                else {
                    digits[i] = 0 ;
                }
            }
            if (digits[0] == 0) {
                digits.insert(digits.begin(), 1); 
            }

            return digits ;
        }

    }
};