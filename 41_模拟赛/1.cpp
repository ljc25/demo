#include <bits/stdc++.h>

using namespace std;

string s,a,b;
int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            a = s.substr(0, i);
            b = s.substr(i + 1, s.length() - i - 1);
            break; //此处一定要有break
                //因为题目规定输入中出现的第1个空格认为是A和B的分隔
        }
    }
    for(int i=0;i<a.length();i++)        
	{            
		if(!isdigit(a[i]) || stoi(a)<=0 || stoi(a)>1000)            
		{                
			a="?";                
			break;            
		}        
	}        
	for(int i=0;i<b.length();i++)        
	{            
		if(!isdigit(b[i]) || stoi(b)<=0 || stoi(b)>1000)            
		{                
			b="?";                
			break;            
		}        
	}        
	if(a=="?" || b=="?")        
	{            
		cout<<a<<" + "<<b<<" = ?";        
	}        
	else        
	{            
		cout<<a<<" + "<<b<<" = "<<stoi(a)+stoi(b);        
	}
}