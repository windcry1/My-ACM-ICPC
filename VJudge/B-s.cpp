#include<stdio.h>
#include<string.h>
#define N 10010
int main() {
	int n,i,j,a[N], max;
	char balloon[N][16];
	while(scanf("%d",&n)!=EOF) {
		if(n==0) break;
		max=0;
		for(i=0; i<n; i++)
			scanf("%s", balloon[i]);
		for(i=0; i<N; i++)
			a[i]=0;
		for(i = 0; i < n; i++) {
			for(j = i+1; j < n; j++) {
				if (strcmp(balloon[i],balloon[j]) == 0)
					a[i]++;
			}

			if(a[max] <= a[i])
				max = i;
		}
		printf("%s\n",balloon[max]);
	}
	return 0;
}

