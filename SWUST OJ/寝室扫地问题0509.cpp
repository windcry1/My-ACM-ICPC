#include<stdio.h>
int main()
{
    int y,m,d,b,i;
    int s;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d %d %d",&y,&m,&d)!=EOF)
    {
        s=0;
        if(y==2007)
        {
            for(i=9;i<m;i++)
                s=s+a[i];
            s=s+d;
        }
        if(y==2008)
        {
            s=s+122;
            for(i=0;i<m;i++)
                s=s+a[i];
            s=s+d;
            if(m>2)
            {
                s++;
            }
        }
        if(y==2009)
        {
            s=s+122+366;
            for(i=0;i<m;i++)
                    s=s+a[i];
            s=s+d;
        }
        b=s%14;
        if(b==1||b==6||b==11)
            printf("B\n");
        if(b==2||b==7||b==12)
            printf("X\n");
        if(b==3||b==10)
            printf("ALL\n");
        if(b==4||b==8||b==13)
            printf("H\n");
        if(b==5||b==9||b==0)
            printf("P\n");
    }
    return 0;
}
