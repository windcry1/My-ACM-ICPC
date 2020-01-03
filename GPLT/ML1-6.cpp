//Author:LanceYu
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	string s;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		istringstream ss(s);
		string t;
		while(ss>>t)
		{
			if(t=="A-T")
				cout<<"1";
			else if(t=="B-T")
				cout<<"2";
			else if(t=="C-T")
				cout<<"3";
			else if(t=="D-T")
				cout<<"4";
		}
	}
	cout<<endl;
 	return 0;
}

