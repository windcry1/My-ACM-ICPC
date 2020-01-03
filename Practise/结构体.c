#include<stdio.h>
struct people
{
	long long int num;
	char name[20];
	int age;
};
/*struct 结构名
{
成员列表；
}变量名列表；

	结构变量成员的一般形式：
结构变量名.成员名   例如：a.num  即这个人的学号。
						b[i].num 第i个人的学号
						b[i].name 第i个人的名字
						b[i].age 第i个人的年龄 
*/
int main()
{
	int n,i;
	struct people b[100];
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld %s %d",&b[i].num,b[i].name,&b[i].age);
		sum+=b[i].age;
	 } 
	for(i=1;i<=n;i++)
	{
		printf("%lld %s %d\n",b[i].num,b[i].name,b[i].age);
	}
	printf("%lf\n",sum/n);
	return 0;
}

