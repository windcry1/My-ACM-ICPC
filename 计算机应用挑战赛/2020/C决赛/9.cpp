# include <stdio.h>
# include <stdlib.h>
int main()
{
    int *p =(int *)malloc(sizeof *p);
    *p = 2;
    int *p1=p;
    free(p);
    int *p2=p;
    printf("%d,%d", p1==p2,*p1==*p2);  
}
