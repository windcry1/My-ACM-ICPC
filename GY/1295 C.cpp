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
vector<int> v[30];map<char,int> mp;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<=29;i++) v[i].clear();
		mp.clear();
		int num=1;
		for(int i=0;i<s1.size();i++){
			if(mp[s1[i]]==0) {
				mp[s1[i]]=num,num++;
			}
			v[mp[s1[i]]].push_back(i);
		}
		bool flag=0;
		for(int i=0;i<s2.size();i++){
			if(v[mp[s2[i]]].size()==0) {
			flag=1;
			}
		}
		if(flag) cout<<-1<<endl;
		else{
		int loc=-1,res=1;
		for(int i=0;i<s2.size();i++){
			if(upper_bound(v[mp[s2[i]]].begin(),v[mp[s2[i]]].end(),loc)!=v[mp[s2[i]]].end()) loc=*upper_bound(v[mp[s2[i]]].begin(),v[mp[s2[i]]].end(),loc);
			else{
				if(i!=0) loc=v[mp[s2[i]]][0],res++;
			} 
		}
		cout<<res<<endl;}
	}
    return 0;
}

