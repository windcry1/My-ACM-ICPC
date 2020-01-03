#include<stdio.h>
struct Student {
	int ID;
	char Class[10000];
	char Name[10000];
	float Mark1;
	float Mark2;
	float Mark3;
	};
int main(){
    int N;
	int m; 
    scanf("%d",&N);
    float Average[N];
    float max;
    Student students[N];{
    	for(int i=0;i<N;i++){
    		scanf("%d %s %s %f %f %f",&students[i].ID,&students[i].Class,&students[i].Name,&students[i].Mark1,&students[i].Mark2,&students[i].Mark3);
    		Average[i]=(students[i].Mark1+students[i].Mark2+students[i].Mark3)/3;
    		printf("%s %.1f\n",students[i].Name,Average[i]);
    			}
    		max=Average[0];	
    			for(int i=0;i<N;i++){
    				
    		        if(max<Average[i])
    		        {
					max=Average[i];
    		        m=i;}    
				}
		 printf("%d %s %s %.1f %.1f %.1f\n",students[m].ID,students[m].Class,students[m].Name,students[m].Mark1,students[m].Mark2,students[m].Mark3);				
    }
     
      return 0;	
}

