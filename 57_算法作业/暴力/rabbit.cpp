#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v1, v2, t, s, l;
    cin >> v1 >> v2 >> t >> s >> l;
    int sec = 0;
    int s1 = 0;
    int s2 = 0;
    while (true)
    {
        if (s1 >= l || s2 >= l)
        {
            break;
        }
        sec++;
        s1 += v1;
        s2 += v2;
        if (s1 < l && s1 - s2 >= t)
        {
            int temp = s;
            while (temp--)
            {
                sec += 1;
                s2 = s2 + v2;
                if (s2 >= l)
                {
                    cout << 'T' << endl;
                    cout << sec << endl;
                    return 0;
                }
            }
        }
    }

    if (s1 >= l && s2 >= l)
    {
        cout << 'D' << endl;
    }
    else if (s1 >= l)
    {
        cout << 'R' << endl;
    }
    else if (s2 >= l)
    {
        cout << 'T' << endl;
    }
    cout << sec << endl;
    return 0;
}
