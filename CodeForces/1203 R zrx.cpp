#include<cstdio>
int a[150010],t[150010];
int main() {
	int n;
	scanf("%d",&n);
	int tmp;
	while(n--) {
		scanf("%d",&tmp);
		++a[tmp];
	}
	for(int i=1; i<=150001; i++) {
		if(a[i]) {
			if(i!=1&&!(a[i-1]+t[i-1])) {
				t[i-1]=1;
				a[i]--;
			}
		}
		if(a[i]+t[i]>1) {
			t[i+1]++;
			a[i]--;
		}
	}
	for(int i=1; i<=150001; i++)
		if(a[i]+t[i])
			a[i]+=t[i];
	int ans=0;
	for(int i=1; i<=150001; i++)
		if(a[i])
			++ans;
	printf("%d\n",ans);
	return 0;
}

