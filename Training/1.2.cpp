#include<bits/stdc++.h>
using namespace std;
void SORT(int *a,int left,int right)
{
	int i=left,j=right;
    int mid=(i+j)/2;
    if(i<j)
    {
        while((i<j)&&(a[i]<a[mid]))i++;
        while((i<j)&&(a[j]>a[mid]))j--;
         if (i <= j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
        if(left<j)
        SORT(a,left,j);
        if(i<right)
        SORT(a,i,right);
    }
}
int main()
{
	int a[1001],i=0,flag=1;
	char s[1001];
	while(scanf("%s",s)!=EOF)
	{
		flag=1;
		memset(a,0,sizeof(a));
		i=0;
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]!='5')
			{
				flag=0;
				a[i]*=10;
				a[i]+=s[j]-'0';
			}
			if(s[j]=='5'&&flag==0)
			{
				i++;
				flag=1;
			}
		}
		if(flag==0)
			i++;
		SORT(a,0,i-1);
		for(int j=0;j<i;j++)
		{
			if(j==i-1)
				cout<<a[j];
			else
				cout<<a[j]<<' '; 
		} 
		cout<<endl;
	}
		return 0;
}
