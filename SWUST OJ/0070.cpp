//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

struct node
{
	char name[1001];
	int e;
};
bool cmp(node a,node b)
{
	if(a.e!=b.e)
		return a.e<b.e;
	else
		return strcmp(a.name,b.name)<0;
}
int main()
{
	struct node x[15]={{"Boiled Fish with Pickled Cabbage and Chili",92},{"Sauted Sliced Pork with Pepper and Chili , Sichuan Style",231},{"Cold Noodles Sichuan Style",260},{"Fish Filets in Hot Chili Oil",239},{"Steamed Rice Rolls",196},{"Kung Pao Chicken",313},{"Hot and Sour Rice Noodles",144},{"Soybean Milk",92},{"Steamed Rice",31},{"Scrambled Egg with Scallion",81},{"Steamed Jiaozi",119},{"Sauted Sliced Pork with Black Fungus",143},{"Scrambled Egg with Leek",128},{"Steamed Bun Stuffed with Red Bean Paste",128},{"Yu-Shiang Shredded Pork (Sauted with Spicy Garlic Sauce)",134}};
	sort(x,x+15,cmp);
	int total;
	while(scanf("%d",&total)!=EOF)
	{
		int i,j,sum=0;
		for(i=0;i<15;i++)
		{
			sum=sum+x[i].e;				
			if(sum>total)
				break;
		}
		for(j=0;j<i;j++)
			printf("%s %d\n",x[j].name,x[j].e);
	}
	return 0;
}

