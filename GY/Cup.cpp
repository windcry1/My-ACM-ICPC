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
#define double long double
using namespace std;
double clp=1e-10;
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		double r,R,h,H,v,h2,a,v2,r2,w=acos(-1.0);
		cin>>r>>R>>H>>v;
		if(R!=r){
			h2=H*r/(R-r);
			double l=0,ri=H;
			while(ri-l>clp){
				h=(l+ri)/2;
				//r2=h/H*(R-r)+r;
				r2=(h2+H-h)*R/h2;
				v2=(h*w*(r*r+r*r2+r2*r2))/3.0;
				if(v2>v) ri=h;
				else l=h; 
			}
			cout<<fixed<<setprecision(6)<<l<<endl;
		}
		else{
			double l=0,ri=H;
			while(ri-l>clp){
				h=(l+ri)/2;
				v2=h*w*r*r;
				if(v2>v) ri=h;
				else l=h;
			}
			cout<<fixed<<setprecision(6)<<l<<endl;
		}
	} 
    return 0;
}

