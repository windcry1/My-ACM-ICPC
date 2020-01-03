 #include<stdio.h>
int main()
{
	int a;
	float b,mul;
	scanf("%d%f",&a,&b);
	if (a>=0&&a<=40)
	{
		mul=a*b;
		printf("%g\n",mul);
	}
	else if (a>40&&a<=60)
	{
		mul=b*40+(a-40)*1.5*b;
		printf("%g\n",mul);
	}
	else if (a>60&&a<=168)
	{
		mul=b*40+20*1.5*b+(a-60)*3*b;
		printf("%g\n",mul);
	}
	 else 
	 	printf("input is wrong!\n");
	 return 0;
 }


