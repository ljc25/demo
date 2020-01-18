/* P1086 花生采摘
   ？？？怎么储存二维数组里面的有序最大值的位置
   再开一个结构体数组来储存有花生的坐标以及花生数，然后用排序交换结构体变量即可
*/

#include <iostream>

using namespace std;

//x,y储存坐标   time储存时间   w储存花生的数量
struct peanuts{
    int x,y,time,w;
};

peanuts p[1000001];

int a[10010][10010]; //存储花生地的花生种数

int m,n,t,u,k=1,ans;

int main()
{
    cin >> m >> n >> t;
    for(int i=1;i<=m;i++)
        for(int j =1;j<=n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]>0)
            {
                p[k].w = a[i][j];
                p[k].x = i;
                p[k].y = j;
                k++;
            }
        }

    for(int i =1;i<k;i++)
        for(int j = i + 1;j<=k;j++)
            if(p[i].w<p[j].w) swap(p[i],p[j]);
    
      for(int i=1;i<=k;i++){
         u=p[i].x;
         if(i==1) p[i].time=p[i].x+1;  
         else   p[i].time=p[i-1].time+abs(p[i].x-p[i-1].x)+abs(p[i].y-p[i-1].y)+1;
         if (p[i].time+u<=t) ans+=p[i].w;
     }
    cout<<ans;
    return 0;
}