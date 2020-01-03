#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
int arr[110];
int dis[110];
int vis[110];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
      cin>>arr[i];
    sort(arr+1,arr+n+1);
    for(int i=1;i<n;i++)
      dis[i]=arr[i+1]-arr[i];
    vis[1]=0;
    vis[n]=1;
    for(int i=1;i<n-1;i++)
      if (dis[i]>dis[i+1])
        vis[i+1]=0;
      else vis[i+1]=1;
    for(int i=1;i<n;i++)
      {
        if (vis[i]==0&&vis[i+1]==1)
          {
            ans++;
            if (vis[i-1]==0&&vis[i+2]==1) ans++;
          }
      } 
    cout<<ans<<endl;
    return 0;
}

