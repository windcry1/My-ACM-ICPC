#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char s1[1010],s2[1010];
		int mp1[300]={0},mp2[300]={0};
		scanf("%s%s",s1,s2);
		int len1=strlen(s1),len2=strlen(s2);
		for(int i=0;i<len1;i++) mp1[s1[i]]++;
		for(int i=0;i<len2;i++) mp2[s2[i]]++;
		int flag=1;
		for(int i=0;i<300;i++){
			if(mp1[i]!=mp2[i]) flag=0;
		}
		printf(flag?"Yes\n":"No\n");
	}
	return 0;
}

