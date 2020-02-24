/* P1309瑞士轮 
   merge解法
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
player win[200001],lose[200001];//储存每场比赛的胜者和败者，用来归并排序
player temp[200001];  //临时数组

bool cmp(player &x, player &y)
{
    if (x.score != y.score)
        return x.score > y.score;
    else
        return x.id < y.id;
}

void merge()
{
    int i=0,j=0,t=0;
    while(i<N&&j<N)
    {
        if(win[i].score>lose[j].score||win[i].score==lose[j].score&&win[i].id<lose[j].id)
            temp[t++]=win[i++];
        else
            temp[t++]=lose[j++];
    }
    while(i<N) temp[t++]=win[i++];
    while(j<N) temp[t++]=lose[j++];
    for(int k =0;k<2*N;k++)
        pl[k]=temp[k];
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
        int t1 = 0,t2=0;
        for(int j = 0;j<N*2;j=j+2)
        {
            if(pl[j].strength>pl[j+1].strength)
            {
                pl[j].score++;
                win[t1++]=pl[j];
                lose[t2++]=pl[j+1];
            }
            else
            {
                pl[j+1].score++;
                win[t1++]=pl[j+1];
                lose[t2++]=pl[j];
            }
        }
        merge();
        // sort(pl,pl+N*2,cmp);
    }
    // for(int i = 0;i<2*N;i++)
    //     cout << pl[i].id << " ";
    //     cout << endl;
    // for(int k =0;k<N;k++)
    //     cout << win[k].id << " ";
    //     cout << endl;
    // for(int k =0;k<N;k++)
    //     cout << lose[k].id << " ";
    cout << pl[Q-1].id;
    return 0;
}