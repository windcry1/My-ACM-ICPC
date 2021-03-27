#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#define int long long
using namespace std;
int a[2222];
int aa;
string s;
int sum=0;
vector<int> v;
vector<int> res;
void dfs(int x){
	if(sum>aa){
		return ;
	}
	if(sum==aa){
		if(res.size()==0 || v.size()<res.size())
			res=v;
	}
	if(a[x<<1]){
		sum+=a[x<<1];
		v.push_back(a[x<<1]);
		dfs(x<<1);
		sum-=a[x<<1];
		v.pop_back();
	}
	if(a[x<<1|1]){
		sum+=a[x<<1|1];
		v.push_back(a[x<<1|1]);
		dfs(x<<1|1);
		sum-=a[x<<1|1];
		v.pop_back();
	}
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>s>>aa;
	while(s.find(",")!=string::npos)
		s = s.replace(s.find(","),1," ");
	while(s.find("null")!=string::npos){
		s = s.replace(s.find("null"),4,"0");
	}
	s = s.replace(s.find("["),1,"");
	s = s.replace(s.find("]"),1,"");
	istringstream ss(s);
	int n=1; 
	while(ss>>a[n++]);
	n--;
	dfs(0);
	if(res.size()){
		cout<<"[";
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<",]"[i==res.size()-1];
		}
	}else cout<<"[]"<<endl;
	return 0;
} 
