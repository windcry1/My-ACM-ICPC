//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
char a[10001],b[10001];//创建两个字符数组用于保存字符串 
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
	int n,k;
	scanf("%d%d",&n,&k);
	getchar();
	int i=0,j=0,flag=0,t,len,head=0,count,sum=0;
	char c;
	while(1)
	{
		c=getchar();
		if(c==' ')
			continue;
		else if(c=='\n')
			flag++;
		else a[i++]=c;
		if(flag==n)
			break;
	}//读入时自动过滤空格和换行 
	len=strlen(a);
	j=0;
	for(i=0;i<len;i++)
	{
		if(a[i]=='\\'&&(a[i+1]=='\\'||a[i+1]=='"'))
			b[j++]=a[++i];
		else if(a[i]!='"')
			b[j++]=a[i];
	}//变化\\ 和 \"同时消除多余的引号，方便下面处理 
	len=strlen(b);
	//puts(b);
	string s,str[81];//s保存分割前的，str保存分割后的 
	while(k--)
	{
		cin>>s;
		int q=0;//q用于保存是否满足Object和String两种状态 
		int len2=s.length();
		int w=0;//分有点和没有点讨论，本来是像靠没有点捞点分的 
		for(i=0;i<len2;i++)
		{ 
			if(s[i]=='.')
			{ 
				w++;
				break;
			}
		}
		if(!w)//没有点的情况
		{
			for(i=0;i<len-len2;i++)
			{
				flag=0;
				for(j=0;j<len2;j++)
				{
					if(b[i+j]==s[j])
						flag++;
				}//出现字串进行以下处理 
				if(flag==len2)
				{
					sum=0;
					for(j=1;j<i+len2;j++)
					{
						if(b[j]=='{')
							sum++;
						else if(b[j]=='}')
							sum--;
					}
					if(sum)//计算这个之前的{和}的数量（除第一个以外），如果两两配对证明是第一层的元素 
						continue;
					int bz=0;//bz作为标记判定是否是OBJECT和STRING 
					if(b[i+len2]==':'&&b[i+len2+1]=='{')
						bz=2;//有:{组合，一定是OBJECT 
					else if(b[i+len2]==':')
					{
						bz=1;//除上面的情况，还出现了:一定是STRING 
						head=i+len2+1;//head表示STRING起始的位置 
					}
					if(j==len)
						t=j;
					if(bz==2)
					{
						q=1;
						printf("OBJECT\n");
					}
					else if(bz==1)
					{
						q=1;
						printf("STRING ");
						for(j=head;b[j]!=','&&b[j]!='}';j++)
							putchar(b[j]);
						putchar('\n');
					}
				}
			}
			if(!q)//如果不满足OBJECT和STRING的情况就不存在 
				printf("NOTEXIST\n"); 
		}
		else
		{
			count=1;
			for(i=0;i<len2;i++)
			{
				if(s[i]=='.')
				{
					s[i]=' ';//有点的地方打上空格方便用字符串流处理 
					count++;
				}
			}
			istringstream ss(s);
			for(i=0;i<count;i++)
				ss>>str[i];//分割字符串 
			t=0;
			for(int l=0;l<count;l++)//l用于保存当前处理的字符串是第几个 
			{
				len2=str[l].length();
				for(i=t;i<len-len2;i++)//i一定要从当前的位置之后遍历获取下一个的位置 
				{
					flag=0;
					for(j=0;j<len2;j++)
					{
						if(b[i+j]==str[l][j])
							flag++;
					}//和上面没有点的情况同理 
					if(flag==len2&&b[i+len2]==':'&&b[i+len2+1]=='{'&&l!=count-1)
					{
						if(l==0)
							head=i+len2;//head表示刚开始的位置 
						t=i+len2+2;//t表示结束的位置 
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]!='{')
					{
						sum=0;
						for(j=head-1;j<i+len2;j++)
						{
							if(b[j]=='{')
								sum++;
							else if(b[j]=='}')
								sum--;
						}
						if(sum!=count-1)//和上面相同，不一样的地方在于这里只能有count-1个，且这里放在了是string的里面，当然放在外面也是可以的，读者自行考虑 
							continue; 
						printf("STRING ");
						q=1;
						for(j=i+len2+1;b[j]!=','&&b[j]!='}';j++)
							putchar(b[j]);
						putchar('\n');
						break;
					}
					else if(flag==len2&&b[i+len2]==':'&&l==count-1&&b[i+len2+1]=='{')//当里面还有:{组合的时候就是OBJECT 
					{
						printf("OBJECT\n");
						q=1;
						break;
					}
				}
			}
			if(!q)
				printf("NOTEXIST\n");
		}
	}
	return 0;
}

