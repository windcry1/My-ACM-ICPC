#include<stdio.h>
char tree[100010];
int res=0;
void init(int sub){
    char t;scanf(" %c",&t);
    tree[sub]=t;
    if(t=='0') return;
    init(sub<<1);
    init(sub<<1|1);
}
void print1(int sub){
    if(tree[sub]=='0') return;
    if(tree[sub<<1]=='0' && tree[sub<<1|1]=='0') ++res;
    printf("%c ",tree[sub]);
	print1(sub<<1);
    print1(sub<<1|1);
}
void print2(int sub){
    if(tree[sub]=='0') return;
	print2(sub<<1);
	printf("%c ",tree[sub]);
    print2(sub<<1|1);
}
void print3(int sub){
    if(tree[sub]=='0') return;
	print3(sub<<1);
    print3(sub<<1|1);
    printf("%c ",tree[sub]);
}
int main(){
    init(1);
    print1(1);
    putchar('\n');
    print2(1);
    putchar('\n');
    print3(1);
    putchar('\n');
    printf("%d\n",res);
    return 0;
}
