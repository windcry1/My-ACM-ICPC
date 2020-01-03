#include<stdio.h>
int main(){
	char s[100];
	scanf("%s",s);
	int sum=0;
	for(int i=1;i<4;i++){
		s[i]=s[i+1];
	}
	for(int i=4;i<9;i++){
		s[i]=s[i+2];
	}
	for(int i=0;i<9;i++){
		sum=sum+(s[i]-'0')*(i+1);
	}
	if(sum%11==s[12]-'0'){printf("Right\n"); 
	}
	else {printf("%c-%c%c%c-%c%c%c%c%c-%d\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],sum%11);
	}
	return 0;
}

