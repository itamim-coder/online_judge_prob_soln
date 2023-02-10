#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // int k = 1;
        int lhs = 1;
        int rhs = 1;
        int x, rx;
        for (int x = 0; x < n / 2; x++)
        {
            lhs *= arr[x];
            // x++;
        }
        for (int rx = n; rx > n / 2; rx--)
        {
            rhs *= arr[rx];
            // k++;
        }
        if (lhs == rhs)
        {
            cout << x << endl;
        }

        // cout << k << endl;
    }

    return 0;
}