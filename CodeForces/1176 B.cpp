#include<iostream>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<map>
#include<set>
#include<cmath>
#include<list>
#include<vector>
#include<cstring>
#include<stdlib.h>
using namespace std;
#define inf 0x3f3f3f3f
#define PI 3.1415926
int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int s[105];
		int c1=0,c2=0,c3=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			s[i] = s[i] % 3;
			if(s[i]==1){
				c1++;
			}
			else if(s[i]==2){
				c2++;
			}
			else{
				c3++;
			}
		}
		cout<<c3+min(c1,c2)+(max(c1,c2)-min(c1,c2))/3<<endl;
	}
	return 0;
}

