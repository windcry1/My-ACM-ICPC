/*************************************
>>> Author:  xiaofan
>>> Blog:    https://xiaofan7.cn
>>> Date:    2019-12-21 18:26:05
**************************************/
 
#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long
#define pii pair<int,int>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int INF = 0x3f3f3f3f;
 
inline int read () {
	register int s = 0, w = 1;
	register char ch = getchar ();
	while (! isdigit (ch)) {if (ch == '-') w = -1; ch = getchar ();}
	while (isdigit (ch)) {s = (s << 3) + (s << 1) + (ch ^ 48); ch = getchar ();}
	return s * w;
}
 
string a;
 
int main() {
	IOS;
	//freopen("D:\\in.txt","r",stdin);
	//freopen("D:\\out2.txt","w",stdout);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(i<k)
			a+=s[i];
		else
			a+='0';
	}
	for(int i=0;i<n-k;i++)
		a[i+k]=a[i];
	//cout<<a<<endl;
	for(int i=0;i<n;i++){
		if(a[i]<s[i]){
			if(a[i-1]<'9'){
				a[i-1]++;
				for(int j=i-1;j<n-k;j++)
					a[j+k]=a[j];
				for(int m=i-1;m>=k;m--)
					a[m-k]=a[m];
				break;
			}else{
				a[i]=s[i];
				for(int q=i;q<n-k;q++)
					a[q+k]=a[q];
				for(int w=i;w>=k;w--)
					a[w-k]=a[w];
				break;
			}
		}else
		if(a[i]>s[i])
			break;
		//cout<<a<<endl;
	}
	cout<<n<<endl;
	cout<<a<<endl;
 
 
 
 
	return 0;
}
