/* P1309瑞士轮 
   sort解法
*/
#include <bits/stdc++.h>

using namespace std;

struct player
{
    int strength; // 实力值
    int score;    // 分数
    int id;       // 编号
} pl[200001];

int N, R, Q; // 2*N个人 R场比赛  第 Q 名的是谁

bool cmp(player &x, player &y)
{
    if (x.score != y.score)
        return x.score > y.score;
    else
        return x.id < y.id;
}
int main()
{
        scanf("%d%d%d",&N,&R,&Q);
    for (int i = 0; i < N * 2; i++)
        scanf("%d",&pl[i].score);
    for (int i = 0; i < N * 2; i++)
    {
        scanf("%d",&pl[i].strength);
        pl[i].id = i + 1;
    }
    sort(pl,pl+N*2,cmp);
    for (int i = 0; i < R; i++)
    {
        for(int j = 0;j<N*2;j=j+2)
        {
            if(pl[j].strength>pl[j+1].strength)
            {
                pl[j].score++;
            }
            else
            {
                pl[j+1].score++;
            }
        }

        sort(pl,pl+N*2,cmp);
    }
    cout << pl[Q-1].id;
    return 0;
}