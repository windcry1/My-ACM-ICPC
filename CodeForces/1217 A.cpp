#include<stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d%f",&a,&b);
     if(a<0||a>168)
     {
        printf("input is wrong!\n");
        return 0;
     }
     if(a>40&&a<=60)
     {
         c=40*b+(a-40)*b*1.5;
     }
     if(a<=40)
     {
         c=a*b;
     }
     if(a>60)
     {
         c=40*b+20*1.5*b+(a-60)*b*3;
     }
     printf("%g\n",c);
     return 0;
}

