#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1,str2;cin>>str1>>str2;
	for(int i=0;i<str2.size();i++)
		cout<<(str1.find(str2[i])!=string::npos?'Y':'N');
	cout<<endl;
	return 0;
}

