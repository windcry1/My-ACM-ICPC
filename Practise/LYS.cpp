#include<stdio.h>
#include<string.h>
int printfn(char amb[])
{
	char num[][10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	int i = 0;
	do {
		if (strcmp(amb, num[i] )== 0)
		{
			return i;
			break;
		}
		i++;
	} while (i < 12);
}
int main()
{
	do{
		char amb[6] = { '\0' },amb2[6]={'\0'},amb3[6] = { '\0' },amb4[6] = { '\0' },usel;
		int end, mid1,mid2;
		scanf("%s",amb);
		mid1 = printfn(amb);
		getchar();//�ո�
		scanf("%s", amb2);//�ӺŻ���
			if (amb2[0]!='+')//Ϊ��
			{
				mid2 = printfn(amb2);
				end = mid1 * 10 + mid2;
				getchar();//ȡ�ո�
				getchar();//�Ӻ�
			}
			else//Ϊ�Ӻ�
			{
				end = mid1;
			}
			getchar();
		scanf("%s", amb3);
		mid1 = printfn(amb3);
		getchar();//�ո�
		scanf("%s", amb4);//�ȺŻ���
			if (amb4[0] != '=')//��λ��
			{
				mid2 = printfn(amb4);
				end = end+mid1 * 10 + mid2;
				getchar();
				getchar();
			}
			else
			{
				end = end+mid1;
			}
		if (end == 0)
		{
			return 0;
		}
		printf("%d\n", end);
		end=0;
		mid1=0;
		mid2=0;
		memset(amb,'\0',sizeof(amb));
		memset(amb2,'\0',sizeof(amb2));
		memset(amb3,'\0',sizeof(amb3));
		memset(amb4,'\0',sizeof(amb4));
	}
	while(1);
	return 0;
}
