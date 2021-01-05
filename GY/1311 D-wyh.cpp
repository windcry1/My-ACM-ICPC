#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iomanip>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ls x<<1
#define rs x<<1|1
#define fi first
#define se second
#define ll long long
#define pb push_back
#define mp make_pair
#define fun function
#define vi vector<int>
#define lowbit(x) x&(-x)
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
 
using namespace std;
 
const int INF = 0x3f3f3f3f;
 
 
int main() {
	IOS;
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
 
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		int mi=INF;
		int a1,a2,a3;
		int sum=0;
		for(int i=a; i>=1; i--) {
			for(int j=1; j<=100; j++) {
				double p=c*1.0/(i*j)*1.0;
				int ma;
				if(p-(int)p>=0.5)
					ma=(int)p+1;
				else
					ma=(int)p;
				
				sum=abs(i-a)+abs(i*j-b)+abs(i*j*ma-c);
				if(i==6 && j==4){
					
				//	cout<<abs(i-a)<<" "<<abs(i*j-b)<<" "<<abs(i*j*ma-c)<<endl;
				}
				if(sum<mi) {
					mi=sum;
					a1=i;
					a2=i*j;
					a3=i*j*ma;
				}
			}
		}
		for(int i=a+1; i<=10000; i++) {
			for(int j=1; j<=100; j++) {
				double p=c*1.0/(i*j)*1.0;
				int ma;
				if(p-(int)p>=0.5)
					ma=(int)p+1;
				else
					ma=(int)p;
				
				sum=abs(i-a)+abs(i*j-b)+abs(i*j*ma-c);
				if(sum<mi) {
					mi=sum;
					a1=i;
					a2=i*j;
					a3=i*j*ma;
				}
			}
		}
		cout<<mi<<endl;
		cout<<a1<<" "<<a2<<" "<<a3<<endl;
	}
 
 
 
 
	return 0;
}
 
