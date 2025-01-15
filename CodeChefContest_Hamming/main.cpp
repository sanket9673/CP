#include <bits/stdc++.h>
    using namespace std;

int numset(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr1;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr1.push_back(num);
        }

        vector<int> bset;
        for (int i = 0; i < n; i++)
        {
            bset.push_back(numset(arr1[i]));
        }

        bool isvalid = true;
        for (int i = 0; i < n; i++)
        {
            if (bset[i] != bset[arr1[i] - 1])
            {
                isvalid = false;
                break;
            }
        }
        if (isvalid)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
