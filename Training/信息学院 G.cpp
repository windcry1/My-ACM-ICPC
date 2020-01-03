
#include<iostream>
#include<string>
#define NUM 1010
using namespace std;
int c[NUM][NUM];
char b[NUM][NUM];
int cnt=0;
void LCS_LENGTH(string X, string Y){
	int m = X.length();
	int n = Y.length();
	for (int i = 1; i <= m; i++)
		c[i][0] = 0;
	for (int j = 0; j <= n; j++)
		c[0][j] = 0;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			if (X[i - 1] == Y[j - 1]){
				c[i][j] = c[i - 1][j - 1] + 1;
				b[i][j] = 'a';
			}
			else if (c[i - 1][j] >= c[i][j - 1]){
				c[i][j] = c[i - 1][j];
				b[i][j] = 'b';
			}
			else{
				c[i][j] = c[i][j - 1];
				b[i][j] = 'c';
			}
		}
	}
}
 
void PRINT_LCS(string X,int m, int n)
{
	if (m == 0 || n == 0)
		return;
	if (b[m][n] == 'a'){
		PRINT_LCS(X,m - 1, n - 1);
		cnt++;
	}
	else if (b[m][n] == 'b'){
		PRINT_LCS(X, m - 1, n);
	}
	else
		PRINT_LCS(X, m, n - 1);
}
int main()
{
	string X, Y;
	while(cin >> X >> Y)
	{
		cnt=0;
		LCS_LENGTH(X, Y);
		PRINT_LCS(X,X.length(), Y.length());
		cout<<cnt<<endl;
	}
	return 0;
}
