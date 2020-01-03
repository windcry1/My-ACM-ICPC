//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a[168]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};
	string s,s1,s2,s3;
	while(cin>>s)
	{
		int MAX=0;
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(s[i]==a[j]+'0')
				{
					if(MAX<a[j])
						MAX=a[j];
					break;
				}
			}
		}
		printf("%d",MAX);
		MAX=0;
		for(int i=0;i<19;i++)
		{
			int num=(s[i]-'0')*10+s[i+1]-'0';
			for(int j=4;j<25;j++)
			{
				if(num==a[j])
				{
					if(MAX<a[j])
						MAX=a[j];
					break;
				}
			}
		}
		printf("%02d",MAX);
		MAX=0;
		for(int i=0;i<18;i++)
		{
			int num=(s[i]-'0')*100+(s[i+1]-'0')*10+s[i+2]-'0';
			for(int j=25;j<168;j++)
			{
				if(num==a[j])
				{
					if(MAX<a[j])
						MAX=a[j];
					break;
				}
			}
		}
		printf("%03d",MAX);
		printf("\n");
		MAX=0;
	}
	return 0;
}

