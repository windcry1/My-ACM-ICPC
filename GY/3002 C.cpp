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
const double INF = 1e12;
vector<double> v1,v2;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	double x0,y0;
	cin>>x0>>y0;
	int n,k;
	cin>>n>>k;
	 for(int i=1;i<=n;i++){
	 	double x,y;
	 	cin>>x>>y;
	 	if(x*x0<0){
	 		v1.push_back(y0-x0*(y-y0)/(x-x0));
		 }
		 if(y*y0<0){
		 	v2.push_back(x0-y0*(x-x0)/(y-y0));
		 }
	 }
	 sort(v1.begin(),v1.end());
	 sort(v2.begin(),v2.end());
	k=n-k;
	 double mmin=INF;
	 if(v1.size()>=k){
	 	int l=0,r=k-1;
	 	while(r<v1.size()){
	 		mmin=min(v1[r]-v1[l],mmin);
	 		l++,r++;
		 }
	 }
	 if(v2.size()>=k){
	 	int l=0,r=k-1;
	 	while(r<v2.size()){
	 		mmin=min(v2[r]-v2[l],mmin);
	 		l++,r++;
		 }
	 }
	 if(mmin==INF) printf("-1\n");
	 else printf("%.8lf\n",mmin);
    return 0;
}

