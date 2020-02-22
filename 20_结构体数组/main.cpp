/* P1093 奖学金 */
#include <bits/stdc++.h>

using namespace std;

struct student{
    int chinese;
    int math;
    int english;
    int total;
    int id;
}stu[301];

int m;   // m 个 人

bool cmp(student &x,student &y)
{
    if(x.total!=y.total) return x.total>y.total;
    if(x.chinese!=y.chinese) return x.chinese>y.chinese;
    return x.id<y.id;
    
}
int main(){
    cin >> m ;
    for(int i = 0;i<m;i++)
    {
        cin >> stu[i].chinese >> stu[i].math >> stu[i].english ;
        stu[i].total = stu[i].chinese + stu[i].math + stu[i].english ;
        stu[i].id = i + 1;
    }

    sort(stu,stu+m,cmp);

    for(int i =0;i<5;i++)
        cout << stu[i].id <<" " <<stu[i].total << endl;
    return 0;
}