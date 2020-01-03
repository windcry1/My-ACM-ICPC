#include <stdio.h>
int main() 
{ 
    double a ;
    while(scanf("%lf",&a)!=EOF)
    {
    if ((a-(int)a) ==0)	printf("Yes\n");
    else	printf("No\n");
	}
    return 0; 
}
