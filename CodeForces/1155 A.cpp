/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/17/2019 9:14:24 PM
*************************************************************************/
#include<stdio.h>
#include<string.h>
char s[300010];//definition
int main(){
	int n;//definition
	scanf("%d",&n);//input
	scanf("%s",s);//input
	char max=s[0];//definition of the max character in this string, initialize it with s[0],
	//which means the max character now is s[0];
	int pos=0;//definition of the position of the max character
	for(int i=1;i<n;i++) {
		if(max>s[i]){//this is the status that means the substring[pos,i],can be reversed, whose Dictionary order is less 
			printf("YES\n");
			printf("%d %d\n",pos+1,i+1);
			return 0;
		}
		if(max<s[i]) {
			max=s[i];pos=i;//Update the max number; 
		}
	}
	printf("NO\n");
	return 0;
}

