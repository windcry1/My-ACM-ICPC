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
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
		string s1,s2;
		while(cin>>s1>>s2){
			int res=(s1[0]-'0')*10+s1[1]-'0'+(s2[0]-'0')*10+s2[1]-'0';
			cout<<res<<endl;
		}
    return 0;
}

