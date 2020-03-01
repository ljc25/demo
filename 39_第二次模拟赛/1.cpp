#include <bits/stdc++.h>

using namespace std;

string m;
double num;
double ans;
int main()
{
    cin >> m;
    for(int i = 0;i<m.length();i++)
    {
        if(m[i]=='2')
            num++;
    }
	if(m[0]=='-')
	{
	    ans = num/(m.length()-1);
		ans*=1.5;
	}
	else
		ans = num/m.length();
	if(m[m.length()-1]%2==0)
        ans*=2;
    printf("%0.2lf%\n",ans*100);
    return 0;
}
/* #include <bits/stdc++.h>
using namespace std;

int place(string s)//判断是否能整除2
{
	if(s[s.size()-1]%2==0)
		return 1;
	else
		return 0;
} 
int main()
{
	string s;
	double sum=0,x=1,sum2=0,odd=1;
	double t;
	cin>>s;
	if(s[0]=='-')//为负数 
	{
		x=1.5;
		sum=s.size()-1;
		if(place(s)==1)
			odd=2;
		for(int i=1;i<s.size();i++)
		{
			if(s[i]=='2')
				sum2++;	
		}
		//cout<<sum2<<" "<<sum<<" "
		t=sum2/sum*x*odd*100;
		printf("%.2lf%\n",t);
	}
	else//为正数 
	{
		sum=s.size();
		if(place(s)==1)
			odd=2;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='2')
				sum2++;	
		}
		t=sum2/sum*x*odd*100;
		printf("%.2lf%\n",t);
	}
	
} */