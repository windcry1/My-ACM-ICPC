#include<stdio.h>
struct people
{
	long long int num;
	char name[20];
	int age;
};
/*struct �ṹ��
{
��Ա�б�
}�������б�

	�ṹ������Ա��һ����ʽ��
�ṹ������.��Ա��   ���磺a.num  ������˵�ѧ�š�
						b[i].num ��i���˵�ѧ��
						b[i].name ��i���˵�����
						b[i].age ��i���˵����� 
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

