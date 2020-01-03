#include <iostream>
#include <string>
using namespace std;
const int M = 20;
const int N = 20;
char A[N][M];
string Lib[26]={"00001", "00010", "00011", "00100", "00101", "00110", "00111", "01000", "01001", "01010",
                "01011", "01100", "01101", "01110", "01111", "10000", "10001", "10010", "10011", "10100", 
				"10101", "10110", "10111", "11000", "11001", "11010"};
string s1, s2;
int main() 
{
	int n, m;
	cin >> n >> m;
	getline(cin, s1);
	for (int i=1; i<s1.length(); i++)
	{
		if (s1[i]==' ')
			s2 += "00000";
		else
			s2 += Lib[s1[i]-'A'];
	} 
	for (int i=n*m-s2.length(); i>0; i--) 
		s2 += "0";
	int t=0,left=-1,right=m-1,top=0,bottom=n-1;
	while (left<=right && top<=bottom)
	{
		if (top<=bottom)
		{
			for (int j=++left; j<=right; j++)
				A[top][j] = s2[t++];
		}
		if (left<=right)
		{
			for (int i=++top; i<=bottom; i++)
				A[i][right] = s2[t++];
		}
		if (top<=bottom)
		{
			for (int j=--right; j>=left; j--)
				A[bottom][j] = s2[t++]; 
		}
		if (left<=right)
		{
			for (int i=--bottom; i>=top; i--)
				A[i][left] = s2[t++];
		}
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << A[i][j];
		}
	}
	cout << endl;
	return 0;	
} 

