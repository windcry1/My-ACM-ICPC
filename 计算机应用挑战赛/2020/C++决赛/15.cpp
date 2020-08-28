#include<iostream>
using namespace std;
struct S
{ 
int n;
char c[10];
} *p;
int main(){
struct S a[3]={{3,"abc"}, {5, "def"}, {7,"ghi"}};
p=a;
cout<<p->n<<" ";
cout<<(p+1)->n<<endl;
//cout<<a[1].n<<endl;
//cout<<(*(p+1)).n<<endl;
return 0;
}
