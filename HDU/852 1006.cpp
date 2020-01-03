#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char s[1000000+5],ch[1000000+5];
int nxt[1000000+5];
int lenc,lens;
void kmp()
{
    nxt[0]=-1;
    int j=-1,i=0;
    while(i<lenc){
        if(j==-1||ch[i]==ch[j]){
            i++,j++;
            nxt[i]=j;
        }else j=nxt[j];
    }
}
void calcnxt()
{
    int i=0,j=0;
    while(i<lens){
        if(j==-1||s[i]==ch[j]){
            i++,j++;
            if(j==lenc){
                printf("%d\n",i-lenc+1);
                j=nxt[j];//Ò»¸ö½áÎ²
            }
        }else j=nxt[j];
    }
}
int main()
{
    scanf("%s%s",s,ch);
    lens=strlen(s),lenc=strlen(ch);
    kmp();
    calcnxt();
    for(int i=1;i<=lenc;i++)
    printf("%d ",nxt[i]);
    cout<<lens<<endl; 
    return 0;
}
