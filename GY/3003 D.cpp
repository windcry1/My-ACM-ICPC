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
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
struct sut{
	double x,y;
}a[1001];
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i].x>>a[i].y;
	}
	int cnt=0;
	for(int i=1;i<=t;i++){
		for(int j=i+1;j<=t;j++){
			for(int k=j+1;k<=t;k++){
				double a1=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
				double b=sqrt((a[k].x-a[j].x)*(a[k].x-a[j].x)+(a[k].y-a[j].y)*(a[k].y-a[j].y));
				double c=sqrt((a[i].x-a[k].x)*(a[i].x-a[k].x)+(a[i].y-a[k].y)*(a[i].y-a[k].y));
				double C=(a1*a1+b*b-c*c);
				double B=(a1*a1+c*c-b*b);
				double A=(b*b+c*c-a1*a1);
				if((A<0||B<0||C<0)&&(a1+b>c&&b+c>a1&&a1+c>b)) cnt++;
				//cout<<a1<<" "<<b<<" "<<c<<" "<<cnt<<endl;
			}
		}
	}
	cout<<cnt<<endl;
    return 0;
}

