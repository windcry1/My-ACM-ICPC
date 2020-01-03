#include <stdio.h>

int main(int argc, const char * argv[],char**env) {
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch (c) {
        case'+':
            printf("%d+%d=%d\n",a,b,a+b);
            break;
        case'-':
            printf("%d-%d=%d\n",a,b,a-b);
            break;
        case'*':
            printf("%d*%d=%d\n",a,b,a*b);
            break;
        case'/':
            if(0==b)
                printf("!\n");
            else
            printf("%d/%d=%d\n",a,b,a/b);
            break;
        default:
            printf("运算超出法则！\n");
    }
    
}
