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
bool vis[40];
char s[60][60]; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<=30;i++){
		if(n&(1<<i)) vis[i]=1;
	}
	for(int i=1;i<=50;i++){
		for(int j=1;j<=50;j++){
			s[i][j]='R';
		}
	}
	for(int i=1;i<=50;i++){
		s[i][i]='B';
		s[i][i+1]='D';
	}
	for(int i=0;i<30;i++){
		if(vis[i]) s[i+1][i+2]='B';
	}
	for(int i=1;i<=50;i++) s[i][50]='D';
	s[50][49]='D'; 
	for(int i=1;i<=50;i++){
		for(int j=1;j<=50;j++)
			cout<<s[i][j];
		cout<<endl;
	}
    return 0;
}

