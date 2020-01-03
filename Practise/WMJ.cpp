#include"stdio.h"
#include"string.h"
int main()
{
    char zifu[205];
    while(scanf("%s",zifu)!=EOF)
    {
    int n=strlen(zifu);
    char num[205]={0};
    char letter[205]={0},special[205]={0};
    int j=0,k=0,l=0;
    for(int i=0;i<n;i++)
    {
            if(zifu[i]>='a'&&zifu[i]<='z'||zifu[i]>='A'&&zifu[i]<='Z')
            {
                letter[j]=zifu[i];
                j++;
            }else if(zifu[i]>='0'&&zifu[i]<='9')
            {
                 num[k]=zifu[i];
                 k++;
            }else{
                 special[l]=zifu[i];
                 l++;
            }
    }
    printf("%s\n",letter);
    printf("%s\n",num);
    printf("%s\n",special);
	}
    return 0;
}
