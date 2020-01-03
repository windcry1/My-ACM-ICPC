#include<bits/stdc++.h>
using namespace std;
ll a[200010],sum[200010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int q;
	cin>>q;
	while(q--)
	{
		int k,n;
		cin>>n>>k;
		for(auto i=1;i<=n;i++)
		{
			cin>>a[i];
			sum[i]=sum[i-1]+a[i];
		}
		if(sum[n]%2!=n%2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		vector<ll> v;
		int pre=0;
		for(auto i=1;i<=n;i++)
			if((sum[i]-sum[pre])%2)
				v.push_back(i),pre=i;
		if(v.size()>=k)
		{
			cout<<"YES"<<endl;
			int cnt=0;
			for(auto i:v)
			{
				cnt++;
				cout<<i<<" ";
				if(cnt>=k)
					break;
			}
			cout<<endl;
		}
		else cout<<"NO"<<endl;
	}
 	return 0;
}

