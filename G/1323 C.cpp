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

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int num1=0,num2=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') num1++;
		else num2++;
	}
	if(num1!=num2) cout<<-1<<endl;
	else{
		int k=0,num=0,res=0;bool flag=0;
		for(int i=0;i<s.size();i++){
			if(i>=1&&s[i-1]==')'&&s[i]=='(') flag=1;
			if(s[i]=='('){
				num++;
			}
			if(i-k+1==num*2){
				//	cout<<i<<endl;
					num=0;
					if(flag){
						flag=0;
						res+=i-k+1;
					}
					k=i+1;
				}
		}	cout<<res<<endl;
	}
    return 0;
}

