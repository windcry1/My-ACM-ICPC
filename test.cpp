#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	int res=n;
	res&&(res+=sum(n-1));
	return res;
}
int main(){
	cout<<sum(10)<<endl;
}
