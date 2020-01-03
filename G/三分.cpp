#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
double clf=1e-12;
double f(double a,double b,double c,double x){
	return a*x*x+b*x+c;
}

int main(){
	int t;double a[10010],b[10010],c[10010];scanf("%d",&t);
	while(t--){
		int k;
		scanf("%d",&k);
		for(int i=1;i<=k;i++){
			scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
		}
		double l=0,r=1000,res;
		while(r-l>clf){
			double mid1=(r-l)*1/3+l,mid2=(r-l)*2/3+l;
			double MAX1=f(a[1],b[1],c[1],mid1),MAX2=f(a[1],b[1],c[1],mid2);
			for(int j=1;j<=k;j++){
				double yy=f(a[j],b[j],c[j],mid1);
				MAX1=max(MAX1,yy);
			}
			for(int j=1;j<=k;j++){
				double yy=f(a[j],b[j],c[j],mid2);
				MAX2=max(MAX2,yy);
			}
			if(MAX1>=MAX2) 
				l=mid1;
			else r=mid2;
			res=MAX1;
		}
		printf("%.4lf\n",res);
	}
    return 0;
}

