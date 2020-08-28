#include <iostream>
using namespace std; 
int main()
{
	int a[6]={1,2,14,28,5,9};
	int *p=a;
	while(1){
		if(*p/10==1)
		{
			cout<<*p;
			break;
		}
		p++;
	}
}
