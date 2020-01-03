#include<stdio.h>
int main()
{
	int x, y, i;
	scanf("%d %d", &x, &y);
	for (i = x; i <= x && i>0; i--)
	{
		if (x%i == 0 && y%i == 0)
			break;
	}
	printf("%d %d\n", i, x*y / i);
	return 0;
}
