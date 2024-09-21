class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> arr ;
        vector<int> res ;
        if (n == 0) {
            return {0} ;
        }
        for (int i = 1; i <= n; i++) {
            string a = to_string(i) ;
            arr.push_back(a) ;
        }
        sort(arr.begin(), arr.end()) ;
        for (const auto& x : arr) {
            res.push_back(stoi(x)) ;
        }

        return res ;
    }
};