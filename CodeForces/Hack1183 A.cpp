#include <iostream>
using namespace std;

bool sum_di(int n){
    int sum2 = 0;
    for(int i=n;i>0;i=i/10){
        sum2 = sum2 + i%10;
    }
    //cout<<sum2<<endl;
    if(sum2%4==0)
        return true;
    else    
        return false;
}

int main() {
	  freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","w",stdout);
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
	
	  int a;
	  while(cin>>a)
	  {
	
	      int b = a;
	    while(1){
	       if(sum_di(b)){
	           cout<<b<<endl;
	           break;
	       }
	       b++;
	    }
}
	return 0;
}
