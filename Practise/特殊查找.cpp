#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][6],inp,count=0,num=1,row=0;
	cin>>inp;
	for(int i=0;i<5;i++)
	for(int j=0;j<6;j++)
	{
		a[i][j]=num;
		num++;
	}//init
	for(int j=0;j<5;j++)
	{
		count++;
		if(inp==a[j][row])
		cout<<j<<" "<<row<<" "<<count<<endl;
		if(inp>a[j][row]&&inp<a[j+1][row])
		{
			for(;;)
			{
				count++;
				row++;
				if(inp==a[j][row])
				{
					cout<<j<<" "<<row<<" "<<count<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
