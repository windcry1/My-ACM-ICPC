//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	ll a[27][2]={1,1,8,6,49,35,288,204,1681,1189,9800,6930,57121,40391,332928,235416,1940449,1372105,11309768,7997214,65918161,46611179,120526554,85225144,197754484,139833537,229743340,162453074,252362877,178447502,274982414,194441930,306971270,217061467,329590807,233055895,352210344,249050323,384199200,271669860,406818737,287664288,416188056,294289397,429438274,303658716,438807593,310283825,461427130,326278253};
	for(n=1;n<=25;n++)
	{
		int cnt=0;
		for(ll i=1;;i++)
			if(sqrt(i*(i+1)/2)==int(sqrt(i*(i+1)/2)))
			{
				cnt++;
				if(cnt==n)
				{
					//a[n][0]=i;
					//a[n][1]=int(sqrt(i*(i+1)/2));
					cout<<i<<","<<int(sqrt(i*(i+1)/2))<<",";
					break;
				}
			}
	}
	while(cin>>n)
	{
		cout<<a[n][0]<<" "<<a[n][1]<<endl;
	}
 	return 0;
}

