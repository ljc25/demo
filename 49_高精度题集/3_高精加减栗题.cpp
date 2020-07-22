/* P4282 [AHOI2008]计算器 */
#include <bits/stdc++.h>

using namespace std;

int n;                    // 长度
int a[100001];            // 存放每个位数上的进制
int b[100001],c[100001];  // 两个运算数
int e[100001];            // 存放高精加法结果
int m = 1;                // 最大数
char d;                   // 运算符

//高精加法
void add(){
    for(int i = 1;i<=n;i++){
        e[i] += (b[i] + c[i]);
        if(e[i]>=a[i]){
            e[i+1] += e[i]/a[i];
            e[i] %= a[i];
        }
    }
}

//高精减法
void sub(){
    for(int i = 1;i<=n;i++){
        e[i] += (b[i] - c[i]);
        if(e[i]<0){
            e[i] += a[i];
            e[i+1]--;
        }
    }
}

int main(){
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        scanf("%d",&a[i]);
    }
    for (int i = n; i > 0; i--)
        scanf("%d",&b[i]);
    /* getchar();
    cin >> d; */
    do
	{
		d=getchar();//输入运算符号 
	}while(d!='+'&&d!='-');
    for (int i = n; i > 0; i--)
        scanf("%d",&c[i]);
    (d=='+')?add():sub();
    for (int i = n; i > 0; i--)
        printf("%d ",e[i]);
    return 0;
}
