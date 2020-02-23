#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
/*
5 5
1 2 3 6 7
6 5 4 5 8
7 8 11 10 9
70 23 2 21 20
13 12 11 10 9
*/
struct pos
{
    int row;
    int column;
};

double  heigh[110][110];
int len[110][110];
int r,c;
stack<pos> same;
stack<int> nLen;


bool fMin(pos& w)
{
   double up=10000,dow=10000,ri=10000,le=10000;
   if(w.row-1>=0&&heigh[w.row-1][w.column]>heigh[w.row][w.column])
    up=heigh[w.row-1][w.column];
   if(w.row+1<r&&heigh[w.row+1][w.column]>heigh[w.row][w.column])
    dow=heigh[w.row+1][w.column];
   if(w.column-1>=0&&heigh[w.row][w.column-1]>heigh[w.row][w.column])
    le=heigh[w.row][w.column-1];
   if(w.column+1<c&&heigh[w.row][w.column+1]>heigh[w.row][w.column])
    ri=heigh[w.row][w.column+1];
    double m1=up<dow?up:dow;
    double m2=ri<le?ri:le;
    double m=m1<m2?m1:m2;
    if(m==10000)
        return false;
    pos t;
    if(m==up)
    {
        t.column=w.column;
        t.row=w.row-1;
        same.push(t);
    }
    if(m==dow)
    {
        t.column=w.column;
        t.row=w.row+1;
        same.push(t);
    }
    if(m==ri)
    {
        t.row=w.row;
        t.column=w.column+1;
        same.push(t);
    }
    if(m==le)
    {
        t.row=w.row;
        t.column=w.column-1;
        same.push(t);
    }
    t=same.top();
    w.column=t.column;
    w.row=t.row;
    same.pop();
    return true;
}

bool fNew(pos &w)
{
    double mi=100000.0;
    bool ans=false;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(len[i][j]==-1&&mi>heigh[i][j])
            {
                ans=true;
                mi=heigh[i][j];
                w.row=i;
                w.column=j;
            }
        }
    }
    return ans;
}

int main()
{
    int num=0;
    cin>>r>>c;
    double mi=100000.0;
    pos w;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            len[i][j]=-1;
            cin>>heigh[i][j];
            if(heigh[i][j]<mi)
            {
                mi=heigh[i][j];
                w.row=i;
                w.column=j;
            }
        }

    bool ok=1;
    while(ok)
    {
        if(len[w.row][w.column]==-1)
        {
            len[w.row][w.column]=0;
            num=0;
        }
        int q=same.size();
        while(fMin(w))
        {
            while(q!=same.size())
            {
                nLen.push(num);
                q++;
            }
            ++num;
            if(len[w.row][w.column]<num)
                len[w.row][w.column]=num;
            q=same.size();
        }
        if(same.size()!=0)
        {
            pos t=same.top();
            w.column=t.column;
            w.row=t.row;

            num=nLen.top();
            same.pop();
            nLen.pop();
            ++num;
            if(len[w.row][w.column]<num)
                len[w.row][w.column]=num;
        }
        else
            ok=fNew(w);
    }
    int max=-1;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(len[i][j]>max)
            {
                w.row=i;
                w.column=j;
                max=len[i][j];
            }
        }
    cout<<max+1;//<<endl;
  /*  for(int i=0;i<r;i++)
    {
         for(int j=0;j<c;j++)
        {
            cout<<len[i][j]<<' ';
        }
        cout<<endl;
    }*/

    return 0;
}