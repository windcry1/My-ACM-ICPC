#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct dj
{
	double n;
	double j;
	double p,d0,d1;
	int c;
}f[110];
bool compare(dj a,dj b)
{
	return a.p>b.p;
}
int main()
{
	double m;int a;
	while(scanf("%d %lf",&a,&m)!=EOF)
	{
		double n=0;
		for(int i=0;i<a;i++)
		{
			scanf("%lf %lf",&f[i].n,&f[i].j);
			f[i].d1=f[i].n/f[i].j;
			f[i].d0=(f[i].n*(1+0.1))/(f[i].j*(1+0.5));
			f[i].p=(f[i].n*(1-0.1))/(f[i].j*(1-0.5));
			f[i].c=3;
		}
		sort(f,f+a,compare);
		int i=0;
		while(m&&i<a)
		{
			if(m>f[i].j*(1+0.5)&&f[i].c>0)
			{
				n+=f[i].n*(1+0.1);
				m-=f[i].j*(1+0.5);
				f[i].c--;
			}
			else if(m>f[i].j&&f[i].c>0)
			{
				n+=f[i].n;
				m-=f[i].j;
				f[i].c--;
			}
			else if(m>f[i].j*(1-0.5)&&f[i].c>0)
			{
				n+=f[i].n*(1-0.1);
				m-=f[i].j*(1-0.5);
				f[i].c--;
			}
			else if(m<f[i].j*(1-0.5))
			{
				for(int j=0;j<a;j++)
				{
					if(f[j].c>0)
					{
						if(m>=(f[j].j*(1-0.5)))
						{
							m-=f[j].j*(1-0.5);
							n+=f[j].n*(1-0.1);
							f[j].c--;
						}
						else
						{
							n+=(f[j].n*(1-0.1))*(m/(f[j].j*(1-0.5)));
							m=0;
							break;
						}
					}
				}
			}
			else
			i++;
		}
		if(n>1)
		printf("%.3lf\n",n);
		else
		printf("he is die!\n");
		memset(f,-1,sizeof(f));
	}
	return 0;
 } 
