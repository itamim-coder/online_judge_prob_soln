#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        long long n, m, ans;
        cin >> n >> m;

        int arr[300];

        for (int i = 1; i < n + m; i++)
        {
            cin >> arr[i];
            arr[i] = -arr[i];
        }
        cin >> ans;

        sort(arr+1, arr + n + m);

        for (int i = 1; i <= n - 1; i++)
        {
            ans -= arr[i];
        }

        cout << ans << endl;
    }
}