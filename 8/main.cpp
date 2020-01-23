#include <bits/stdc++.h>

using namespace std;

struct people
{
    int number, score;
};

int temp;
people a[5001];

int n,m;     //   n 个人    录取 m 个人
int expect;  //  预料人数
int num;     //  实际人数
int d,c = 1;       //  当有分数相同时，记录相同人数
bool po = false;   //默认没有重复

void quicksortmore(int x, int y)    //分数从大到小
{
    if (x > y)
        return;
    int i = x, j = y;
    temp = a[x].score;
    while (i != j)
    {
        while (i < j && a[j].score <= temp)
            j--;
        while (i < j && a[i].score >= temp)
            i++;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[x], a[i]);

    quicksortmore(x, i - 1);
    quicksortmore(i + 1, y);
}

void quicksortless(int x, int y)    //学号从小到大
{
    if (x > y)
        return;
    int i = x, j = y;
    temp = a[x].number;
    while (i != j)
    {
        while (i < j && a[j].number >= temp)
            j--;
        while (i < j && a[i].number <= temp)
            i++;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[x], a[i]);

    quicksortless(x, i - 1);
    quicksortless(i + 1, y);
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i].number >> a[i].score;

    quicksortmore(1, n);

    expect = (int)m * 1.5;

    num = expect;

    while(a[expect].score==a[expect+1].score)    //统计预期之外的人数
    {
        num++;
        expect++;
    }

    while(c<=num)      //相同分数按学号排序
    {
        if(a[c].score!=a[c+1].score)
        c++;
        else
        {
            po = true;
            d = c;
            while(a[c].score==a[c+1].score)
            {
                c++;
            }
            quicksortless(d,c);
            po=false;
        }
    }

    cout << a[num].score << " "<< num<<endl;

    for(int i = 1;i<=num;i++)
    cout << a[i].number <<" "<<a[i].score <<endl;
    return 0;
}