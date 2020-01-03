#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int q,k,n,a,b,c,step1,step2;
    cin>>q;
    while(q--)
    { 
        
        cin>>k>>n>>a>>b;
        if(n*b >= k)
        {
            cout<<-1<<endl;
            continue;
        }
        
            cout<<min((k-n*b - 1)/(a-b),n)<<endl;
        
        
        
    }
}

