#include <bits/stdc++.h>

using namespace std;

int v1, v2, t, s, l; //兔子的速度v1（表示每秒兔子能跑v1米），乌龟的速度v2，以及兔子对应的t，s值，以及赛道的长度l
int l1, l2;          // 兔子和乌龟跑了多少
int flag;            // 兔子等乌龟的时间,默认为0
int i;               // 储存时间

int main()
{
    cin >> v1 >> v2 >> t >> s >> l;
    for(i = 0;l1<l&&l2<l;i++)
    {
        if(flag){
            // 兔子在等 ，乌龟在每秒前进
            flag--;
            l2 += v2;
        }else{
            // 兔子不在等
            l1 += v1;
            l2 += v2;
        }
        //领先t米,兔子之后要等待s秒
        if(l1-l2>=t&&!flag){
            flag = s;
        }
    }
    // 同赢
    if (l1 == l2)
        cout << "D" << endl;
    // 乌龟赢
    else if (l1 < l2)
        cout << "T" << endl;
    // 兔子赢
    else if (l1 > l2)
        cout << "R" << endl;
    cout << i;
    return 0;
}