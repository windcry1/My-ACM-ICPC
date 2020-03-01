#include<stdio.h>
#include<stdlib.h>
#define maxn 1010
typedef struct Seqlist{
	int data[maxn];
	int length;
}seqlist;
void initlist(seqlist *l){
	l->length=0;
}
void insert(seqlist *l,int data){
	l->data[l->length]=data;
	l->length++;
}
void createlist(seqlist *l){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int t;scanf("%d",&t);
		insert(l,t);
	}
}
void findmain(seqlist *l){
	int cnt[maxn]={0};
	for(int i=0;i<l->length;i++){
		for(int j=0;j<l->length;j++){
			if(l->data[i]==l->data[j]){
				cnt[i]++;
			}
		}
	}
	int ok=0;
	for(int i=0;i<l->length;i++){
		if(cnt[i]>l->length/2){
			printf("%d",l->data[i]);
			ok=1;
			break;
		}
	}
	if(ok==0) printf("-1");
}
void print(seqlist *l){
	for(int i=0;i<l->length;i++)
		printf("%d ",l->data[i]);
}
int main(){
	seqlist *l=(seqlist *)malloc(sizeof (seqlist));
	initlist(l);
	createlist(l);
	findmain(l);
	return 0;
}
