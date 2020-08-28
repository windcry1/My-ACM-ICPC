#include  <stdio.h>
typedef struct
{ 
 char name[10];//员工姓名  
 int years;//员工工作年限
 double salary[2];//salary[0]为应发工资；salary[1]为实发工资。
}EMP;        /*填空1*/
int  fun(EMP *emp,int n) /*填空2*/
{  int  i, k=0;
   for(i=0; i<n; i++)
     if(emp[i].years>=5 && (emp[i].salary[0]>5000 || emp[i].salary[1]<5000)) /*填空3*/
     {
   k++;    
      printf("姓名：%s ",emp[i].name);
  }
    return k;          /*填空4*/
}
main()
{  EMP  emp[5]={ "Henry", 3, 4600.5,4360.0 ,"Jason", 5, 5300.5,5000.0, 
                "Lucy", 6, 6280.5,5866.0,"Tomas",4, 4881.0,4556.0, 
                "Aby",7, 5200.0,4900.0};
  printf( "\n共有%d位员工满足条件\n" , fun(emp,5) );
}
