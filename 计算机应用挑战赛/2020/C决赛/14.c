#include  <stdio.h>
typedef struct
{ 
 char name[10];//Ա������  
 int years;//Ա����������
 double salary[2];//salary[0]ΪӦ�����ʣ�salary[1]Ϊʵ�����ʡ�
}EMP;        /*���1*/
int  fun(EMP *emp,int n) /*���2*/
{  int  i, k=0;
   for(i=0; i<n; i++)
     if(emp[i].years>=5 && (emp[i].salary[0]>5000 || emp[i].salary[1]<5000)) /*���3*/
     {
   k++;    
      printf("������%s ",emp[i].name);
  }
    return k;          /*���4*/
}
main()
{  EMP  emp[5]={ "Henry", 3, 4600.5,4360.0 ,"Jason", 5, 5300.5,5000.0, 
                "Lucy", 6, 6280.5,5866.0,"Tomas",4, 4881.0,4556.0, 
                "Aby",7, 5200.0,4900.0};
  printf( "\n����%dλԱ����������\n" , fun(emp,5) );
}
