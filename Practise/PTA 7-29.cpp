//Author:LanceYu
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<queue>
using namespace std;
int main()
{
	char s1[81],s2[81];
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin.getline(s1,81);
	cin.getline(s2,81);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int n=20;
	while(n--)
	{
		for(int i=0;i<len1;i++)
		{
			int flag=0;
			for(int j=0;j<len2;j++)
			{
				if(s1[i+j]==s2[j])
					flag++;
			}
			if(flag==len2)
			{
				for(int j=i;j<len1-len2;j++)
				{
					s1[j]=s1[j+len2];
				}
				len1-=len2;
				s1[len1]='\0';
			}
		}
	}
	cout<<s1<<endl;
	return 0;
}

