#include <bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    int qmscore;
    int pyscore;
    char stuleader;
    char weststu;
    int write;
    int id;
    int money;
}stu[101];

int n; // 学生人数
int sum; //奖学金总和
int ans;

bool academician(student&x)   // 院士奖学金
{
    if(x.write>=1&&x.qmscore>80) return true;
    else return false;
}

bool ws(student&x)  // 五四奖学金
{
    if(x.qmscore>85&&x.pyscore>80) return true;
    else return false;
}

bool yx(student&x) // 成绩优秀奖
{
    if(x.qmscore>90) return true;
    else return false;
}

bool xb(student&x) // 西部奖学金
{
    if(x.weststu == 'Y'&&x.qmscore>85) return true;
    else return false;
}

bool gx(student&x)  // 班级贡献奖
{
    if(x.stuleader== 'Y'&&x.pyscore>80) return true;
    else return false;
}

bool cmp(student&x,student&y)
{
    if(x.money!=y.money) return x.money > y.money;
    else return x.id < y.id;
}

int main()
{
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        cin >> stu[i].name >> stu[i].qmscore >> stu[i].pyscore >> stu[i].stuleader;
        cin >> stu[i].weststu >> stu[i].write ;
        stu[i].id = i + 1;
    }

    for(int i = 0;i<n;i++)
    {
        if(academician(stu[i]))
        {
            stu[i].money += 8000;
            sum+= 8000;
        }
        if(ws(stu[i]))
        {
            stu[i].money += 4000;
            sum+= 4000;
        }
        if(yx(stu[i]))
        {
            stu[i].money += 2000;
            sum+= 2000;
        }
        if(xb(stu[i]))
        {
            stu[i].money += 1000;
            sum+= 1000;
        }
        if(gx(stu[i]))
        {
            stu[i].money += 850;
            sum+= 850;
        }
    }

    sort(stu,stu+n,cmp);

    
    cout << stu[ans].name << endl;
    cout << stu[ans].money << endl;
    cout << sum;
    return 0;
}