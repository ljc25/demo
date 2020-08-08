#include<cstdio>
#include<algorithm>
int x[30];//x[i]代表第i选或不选，0代表选，1代表不选
using namespace std;
int ans;
int main(){
    int n,r;
    scanf("%d%d",&n,&r);//读入n、r
    for(int i=r+1;i<=n;++i)
        x[i]=1; //赋初始值
    do{
        for(int i=1;i<=n;++i){
			if(x[i]==0) printf("%3d",i);//如果是0就输出，注意三个常宽
		}
           ans++;
        printf("\n");//换行
    }while(next_permutation(x+1,x+n+1));//生成下一个
	printf("%d",ans);
    return 0;//返回
}