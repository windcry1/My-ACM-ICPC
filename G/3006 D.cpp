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
double sqrt3(double x){
	if(x>=0) return pow(x,1.0/3);
	else return -pow(-x,1.0/3);
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int t;
	cin>>t;
	while(t--){
		double a,b;
		cin>>b>>a;
		double cnt=0;
		while(fabs(b-sqrt3(b))>1){
			double res1=fabs(b-a);
			double res2=1+fabs(a-sqrt3(b));
			if(res2<res1){
				cnt++;
				b=sqrt3(b);
			}
			else{
				cnt+=res1;
				b=a;
				break;
			}
		}
		cnt+=fabs(b-a); 
		printf("%.7lf\n",cnt);
	}
    return 0;
}

