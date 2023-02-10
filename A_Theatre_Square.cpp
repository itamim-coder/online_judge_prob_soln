#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c;
    cin >> a >> b >> c;

    long long int len = ceil(a / c);
    
    long long int wid = ceil(b / c);
    cout << len * wid << endl;

    return 0;
}