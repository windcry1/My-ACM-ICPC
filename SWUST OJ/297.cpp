#include<iostream>
using namespace std;
int main()
{
	int year,month,day;
	int i,sum=0,s=0;
	int Month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month>>day;
	if((year%4==0&&year%100!=0)||year%400==0)//�ж��Ƿ�������
		Month[2]=29;
	for(i=1;i<year;i++)  //�ȼ���������������
	{
       if((i%4==0&&i%100!=0)||i%400==0)
		   s+=366;
	   else
		   s+=365;
	}
	for(i=0;i<month;i++)  //�ټ�������������
		sum+=Month[i];
    sum=s+sum+day;    //��������������������������ͣ���7ȡģ�����ɵõ���
	if(sum%7==1)
		cout<<"Monday"<<endl;
	else if(sum%7==2)
		cout<<"Tuesday"<<endl;
	else if(sum%7==3)
		cout<<"Wednesday"<<endl;
	else if(sum%7==4)
		cout<<"Thursday"<<endl;
	else if(sum%7==5)
		cout<<"Friday"<<endl;
	else if(sum%7==6)
		cout<<"Saturday"<<endl;
	else if(sum%7==0)
		cout<<"Sunday"<<endl;
	return 0;
}

