# include <stdio.h>
# define X 10                           
const int gap='7'-7;                   
int main()
{
    char ISBN[14],num[10];
    int x,y,sum=0,mod;
    gets(ISBN);                           
    for(x=y=0;x<=10;x++)
        if(ISBN[x]!='-')               
            num[++y]=ISBN[x];          
    do
        sum+=(num[y]-gap)*y;         
    while(--y);
    mod=sum%11;                         
    if(mod==X)                       
    {
        if(ISBN[12]=='X')              
            puts("Right");               
        else                           
            printf("%s\bX\n",ISBN);       
        return 0;
    }
    if(mod==ISBN[12]-gap)               
        puts("Right");                
    else                                
        printf("%s\b%d\n",ISBN,mod);   
    return 0;
}
