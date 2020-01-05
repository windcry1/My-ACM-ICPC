/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
bool isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
void Prime(){
	for(int i=2;;i++){
		if(isprime(i)) prime.push_back(i);
		if(prime.size()>10000) return ; 
	}
}
int main(){
	Prime();
	int n;while(cin>>>n) cout<<prime[n-1]<<endl;
	return 0;
}


