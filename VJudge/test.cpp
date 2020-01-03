#include<stdio.h>
int main(){
	int A,B,n,k;
	int f[53];
	while(scanf("%d %d %d",&A,&B,&n)!=EOF){
	        if(n==0&&A==0&&B==0)
	        return 0;
	        if(n>=3)
	        {for(int i=3;i<51;i++){
	        	f[1]=f[2]=1;
	        	f[i]=(A*(f[i-1])+B*f[i-2])%7;
	        	if(i>=4&&f[i-1]==f[2]&&f[i]==f[3]){
	        		k=i-3;
	        		break;
				}
			}
			 printf("%d\n",f[2+((n-2)%k)]);
		}else
		printf("1\n");
	}
    return 0; 
}

