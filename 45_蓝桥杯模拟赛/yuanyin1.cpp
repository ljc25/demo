#include<iostream>
#include<string>
using namespace std;

string str;
int pos;

bool isYuan(char c)	//判断是否为元音 
{
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
bool yuan()			//遍历元音段 
{
	int len=0;
	for(;pos<=str.length();pos++){
		if(!isYuan(str[pos])) break;
		len++;
	}
	return len;
}
bool zhuo()			//遍历辅音段 
{
	int len=0;
	for(;pos<=str.length();pos++){
		if(isYuan(str[pos])) break;
		len++;
	}
	return len;
}
bool serch()		//开始遍历 
{
	pos=0;
	if(zhuo()&&yuan()&&zhuo()&&yuan()&&pos==str.length()) return true;
	else return false;
}

int main()
{
	cin>>str;
	if(serch()) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}