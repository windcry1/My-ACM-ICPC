#include <stdio.h>
int main()
{
    double cm;
    int foot;
    scanf("%lf",&cm);
    int inch=cm*100/3048*12;
    while(inch>=12)
    {
    	foot++;
    	inch-=12;
	}
	printf("%d %d\n",foot,inch);
    return 0;
}
