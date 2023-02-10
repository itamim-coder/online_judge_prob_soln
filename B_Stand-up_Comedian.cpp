#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > 0 && b == 0 && c == 0 && d == 0)
        {
            cout << a << endl;
        }
        else if (a == 0 && b == 0 && c == 0 && d > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << a * 2 + max(b, c) + 1 << endl;
        }
    }
}