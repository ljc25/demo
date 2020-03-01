// #include <bits/stdc++.h>
// using namespace std;

// string hh,mm;
// int h,m;

// int main()
// {
//     scanf("%s:%s",&hh,&mm);
//     for(int i = 0;i<hh.length();i++)
//     {
//         h = h*pow(10,i);
//         h = h + hh[i]-'0';
//     }
//     if(hh=="12"&&mm=="00"||hh=="00"&&mm=="00"||hh<"12"&&hh>"00")
//     {
//         cout << "Only " << hh << ":" << mm << ".  Too early to Dang";
//         return 0;
//     }
//     if(mm>"00") h++;
//     h -= 12;
//     for(int i = 0;i<h;i++)
//     cout << "Dang";
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%02d:%02d",&a,&b);
    if(a<=12){
        printf("Only %02d:%02d.  Too early to Dang.",a,b);
    }else if(b==0){
        for(int i=0;i<(a-12);i++){
            printf("Dang");
        }       
    }else if(b>0){
        for(int i=0;i<=(a-12);i++){
            printf("Dang");
        }
    }
}