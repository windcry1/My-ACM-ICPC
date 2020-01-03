#include<bits/stdc++.h>
using namespace std;
string s;
map<string,int> wood; 
map<string,int>::iterator iter;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	getchar();
	getchar();
	for(int i=0;i<n;i++){
		if(i!=0) cout<<endl;
		wood.clear();
		int sum=0;
		while(getline(cin,s)){
			if(s=="") break;
			wood[s]++;
			sum++;
		}
		for(iter=wood.begin();iter!=wood.end();++iter){
			cout<<iter->first<<' '<<fixed<<setprecision(4)<<100.0*iter->second/sum<<endl;
		}
	}
	return 0;
}
