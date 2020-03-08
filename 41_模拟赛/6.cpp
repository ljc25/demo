#include <bits/stdc++.h>

using namespace std;

struct student{
    int gender;
    string name;
    bool vis;
}stu[100];

int n;
int i,j;

int main()
{
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin >> stu[i].gender >> stu[i].name;
        /* stu[i].vis=false; */
    }
    for(i=0;i<n;i++)
     {
         for(j=n-1;j>=0;j--)
         {
             if(stu[i].gender!=stu[j].gender&&!stu[i].vis&&!stu[j].vis)
             {
                stu[i].vis=true;
                 stu[j].vis=true;
                 cout<<stu[i].name<<" "<<stu[j].name<<endl;
             }
         }
     }
    return 0;
}