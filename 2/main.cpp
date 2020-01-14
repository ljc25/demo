/*精髓：第一次向后移的时候，大于平均总和的向后移（小于的暂时不做处理），最后反过来一趟，
把多的那部分往前面移，到首位时最小的也被正好分配平，记录次数即可。

另外关于边界，因为平均总和和实际总和是相等的，即总和是不变的，只是算局部总和时，两者不等*/

#include <iostream>

using namespace std;

int n;         //n堆牌
int a[10001];  //每堆牌有多少张
int count;     //记录移动次数
int d;         //记录平均总和和实际总和的差值
int sum[101];  //记录起始到目前堆的总和
int ave;       //记录平均值

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    ave = sum[n]/n;
    for(int i=1;i<=n;i++)
    {
        if(sum[i]>ave*i)
        {
            d = sum[i]-ave*i;
            sum[i] -= d;
            a[i]-=d;
            a[i+1]+=d;
         //   sum[i+1]+=d;    将a[i]的多余移到a[i+1],sum[i]减少了，但sum[i+1]=sum[i]+a[i+1]=sum[i]+a[i]+d;
        //                    所以sum[i+1]是不变的
            count++;
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(a[i]>ave)
        {
            d = sum[i]-ave*i;
            a[i]-=d;
         //   sum[i]-=d;     与上同理
            a[i-1]+=d;
            sum[i-1]+=d;
            count++;
        }
    }
    cout <<count;
    return 0;
}