#include<iostream>
#include <string>
using namespace std;
string count1;
char yy[5] = { 'a', 'e', 'i', 'o', 'u' };
bool flag1, flag2, flag3, flag4, flag5;
int main()
{
	cin >> count1;
	for (int i = 0; i<count1.length(); i++)
	{
		//1、第一个辅音
		if (!flag1&&count1[i] != yy[0] && count1[i] != yy[1] && count1[i] != yy[2] && count1[i] != yy[3] && count1[i] != yy[4])
		{
			continue;
		}
		flag1 = true;   //第一个辅音检查完了
		//2、第一个元音
		if (!flag2&&count1[i] == yy[0] || count1[i] == yy[1] || count1[i] == yy[2] || count1[i] == yy[3] || count1[i] == yy[4])
		{
			continue;
		}
		flag2 = true;  //第一个元音检查完了
		//3、第二个辅音
		if (!flag3&&count1[i] != yy[0] && count1[i] != yy[1] && count1[i] != yy[2] && count1[i] != yy[3] && count1[i] != yy[4])
		{
			continue;
		}
		flag3 = true;   //第二个辅音检查完了
		//4、第二个元音
		if (!flag4&&count1[i] == yy[0] || count1[i] == yy[1] || count1[i] == yy[2] || count1[i] == yy[3] || count1[i] == yy[4])
		{
			if (i == count1.length() - 1)
				flag5 = true;
			continue;
		}
		flag4 = true; //第二个元音检查完了
		//如果元音后面还有辅音就判断为错
		if (flag4&&i<count1.length()-1)
		{
			break;
		}
		flag5 = true;
	}
	if (flag5) cout << "yes";
	else cout << "no";
	system("pause");
	return 0;
}