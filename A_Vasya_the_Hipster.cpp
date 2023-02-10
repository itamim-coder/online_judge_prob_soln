#include <bits/stdc++.h>
using namespace std;

int main()
{
    int red, blue;
    cin >> red >> blue;

    int min_sock = min(red, blue);
    int max_sock = max(red, blue);
    int rem = max_sock - min_sock;
    int ans = rem / 2;
    cout << min_sock << " " << ans;

    return 0;
}