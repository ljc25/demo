#include <bits/stdc++.h>

using namespace std;

int a, n, m;

int main()
{
    cin >> a >> n >> m;
    long tmp = 0;
    a %= m;
    while (n > 0)
    {
        tmp = (a * a) % m;
        if (n % 2 != 0)
        {
            tmp = (tmp * a) % m;
        }
        n /= 2;
    }
    cout << tmp;
    return 0;
}