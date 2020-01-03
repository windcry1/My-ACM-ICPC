#include<stdio.h>
 int main()
{
	char c;
	int a=0,b=0,d=0,e=0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			a++;
		}
		else if (c >= '0' && c <= '9')
		{
			b++;
		}
			else if (c ==' ')
			{
				d++;
			}
		else
		{
			e++;
		}
	}
	printf("%d %d %d %d\n", a, b, d, e);
	return 0;
}
