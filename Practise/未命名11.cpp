#include<stdio.h>
#include<algorithm>
#include <iostream>
using namespace std;
int n,n1,n2;
const int MAX_N=100007;
int a[MAX_N];
int main()
{
    while(scanf("%d %d %d",&n,&n1,&n2))
	{
        int i=0;
        for(i=0;i<n;i++)
        	scanf("%d",&a[i]);
        sort(a,a+n,greater<int>());
        if(n1>n2) swap(n1,n2);//½á¹ûn1<n2
        
        int sum_n1;
        double ans_n1;
        for(i=0;i<n1;i++){
            sum_n1+=a[i];
            ans_n1=sum_n1/n1;
        }
        
        double ans_n2;
        int sum_n2;
        for(i=n1;i<=n1+n2;i++){
            sum_n2+=a[i];
            ans_n2=sum_n2/n2;
        }
        
        double ans=ans_n1+ans_n2;
        printf("%.8f",&ans);
    }
    return 0;
}
