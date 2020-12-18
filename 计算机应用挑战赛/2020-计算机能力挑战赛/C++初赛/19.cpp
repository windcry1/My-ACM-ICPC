#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct node{
	int id;
	int score[3];
}t[510];
int cmp0(node a,node b){
	return a.score[0]>b.score[0] || (a.score[0]==b.score[0] && a.id<b.id);
}
int cmp1(node a,node b){
	return a.score[1]>b.score[1] || (a.score[1]==b.score[1] && a.id<b.id);
}
int cmp2(node a,node b){
	return a.score[2]>b.score[2] || (a.score[2]==b.score[2] && a.id<b.id);
}
int cmp3(node a,node b){
	int tot1=0,tot2=0;
	for(int i=0;i<3;i++){
		tot1+=a.score[i];
		tot2+=b.score[i];
	}
	return tot1>tot2 || (tot1==tot2 && a.score[2]>b.score[2])
	|| (tot1==tot2 && a.score[2]==b.score[2] && a.score[1]>b.score[1])
	|| (tot1==tot2 && a.score[2]==b.score[2] && a.score[1]==b.score[1] && a.score[0]>b.score[0])
	|| (tot1==tot2 && a.score[2]==b.score[2] && a.score[1]==b.score[1] && a.score[0]==b.score[0] && a.id<b.id);
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>t[i].id>>t[i].score[0]>>t[i].score[1]>>t[i].score[2];
	sort(t,t+n,cmp0);
	printf("%08d %d\n",t[0].id,t[0].score[0]);
	sort(t,t+n,cmp1);
	printf("%08d %d\n",t[0].id,t[0].score[0]);
	sort(t,t+n,cmp2);
	printf("%08d %d\n",t[0].id,t[0].score[0]);
	sort(t,t+n,cmp3);
	for(int i=0;i<3;i++){
		int tot=0;
		for(int j=0;j<3;j++)
			tot+=t[i].score[j];
		printf("%08d %d\n",t[i].id,tot);
	}
	return 0;
}

