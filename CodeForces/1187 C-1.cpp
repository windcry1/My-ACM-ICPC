#include<bits/stdc++.h>
using namespace std;
int a[1005],t[1005],l[1005],r[1005],tag[1005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>t[i]>>l[i]>>r[i];
        if(t[i])
        {
            for(int j=l[i];j<r[i];j++)
            {
                tag[j]=1;
            }
        }
    }
    int sum=1e9-2000;
    a[1]=sum;
    for(int i=2;i<=n;i++)
    {
        if(tag[i-1]==0)
            sum-=2000;
        a[i]=sum+i;
    }
    for(int i=1;i<=m;i++)
    {
        if(t[i]==0)
        {
            int flag=1;
            for(int j=l[i];j<r[i];j++)
            {
                if(a[j]>a[j+1])
                    flag=0;
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
//        int flag=1;
//        for(int j=l[i];j<r[i];j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                flag=0;
//
//            }
//        }
//        if(flag!=t[i])
//        {
//            cout<<"NO"<<endl;
//            return 0;
//        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
