#include<iostream>
#include<string>
using namespace std;
int main(){
	string t;cin>>t;
	int h=(t[0]-'0')*10+t[1]-'0',m=(t[3]-'0')*10+t[4]-'0',s=(t[6]-'0')*10+t[7]-'0';
	int pre;cin>>pre;
	int tt=h*3600+m*60+s;
	tt=tt-pre;
	if(tt<0) tt+=86400;
	h=tt/3600;tt%=3600;m=tt/60;tt%=60;s=tt;
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;
}

