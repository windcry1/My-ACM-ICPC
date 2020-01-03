//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	double R1,R2,R3,R4,R5;
	double V1,V2;
	double I1,I2,I3;
	double D,D1,D2,D3;
	scanf ("%lf%lf%lf%lf%lf",&R1,&R2,&R3,&R4,&R5);
	scanf ("%lf%lf",&V1,&V2);
	D=(R1+R2)*(R2+R3+R4)*(R4+R5)-(R4*R4)*(R1+R2)-(R2*R2)*(R4+R5);
	D1=V1*(R2+R3+R4)*(R4+R5)-(R2*R4*V2)-(R4*R4*V1); 
	D2=(V1*R2)*(R4+R5)-(V2*R4)*(R1+R2);
	D3=(R1+R2)*(R2+R3+R4)*(-V2)+(R2*R4)*V1-(R2*R2)*(-V2);
	I1=D1/D;
	I2=D2/D;
	I3=D3/D;
	printf ("%g %g %g\n",I1,I2,I3);
	return 0;
}

