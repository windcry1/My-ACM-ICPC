#include<stdio.h>
#include<string.h>
char s[110][1100],temp[1100];
int judge(char a[],char b[]){
	int lena=strlen(a),lenb=strlen(b),flag;
	for(int i=0;i<=lena-lenb;i++){
		flag=1;
		for(int j=0;j<lenb;j++){
			if(a[i+j]!=b[j]) {
				flag=0;
			}
		}
		if(flag==1) {
			return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%s",s[i]);
	}

	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(judge(s[j],s[i])!=1) {
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}

	int flag=1;
	for(int i=1;i<n;i++) {
		if(judge(s[i],s[i-1])!=1) {
			flag=0;
		}
	}

	if(flag==0) printf("NO\n");
	else {
		printf("YES\n");
		for(int i=0;i<n;i++){
			printf("%s\n",s[i]);
		}
	}
	return 0;
}

