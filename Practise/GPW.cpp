#include<stdio.h>
main()
{
    char a[200];
    char b[200];
    char c[200];
    char d[200];
    int i;

    while(scanf("%s",a)!=EOF)
    {
        char a[200]={0};
        char b[200]={0};
        char c[200]={0};
        int m=0,n=0,k=0;
        for(i=0;a[i]!='\0';i++)
            {
                if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
                {
                    b[m++]=a[i];                                                                                                      [i];
                }
                else if(a[i]>='0'&&a[i]<='9')
                {
                    c[n++]=a[i];
                    n=n+1;
                }
                else
                {
                    d[k++]=a[i];
                    k=k+1;
                }
            }
            printf("\r\n");


    }
}
