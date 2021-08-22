/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 2021/8/22 20:23:11
*************************************************************************/
//#pragma GCC optimize(2)
//#pragma GCC diagnostic error "-std=c++11"
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
vector<ListNode*> solve(int m, ListNode* a) {
        // write code here
        vector<ListNode *> v;
        for(int i=0;i<m;i++) {
            v.push_back(NULL);
        }
        for(ListNode *t = a;t;t= t->next) {
            int tt = t->val;
            ListNode *ln = (ListNode *)malloc(sizeof (ListNode));
            ln->val = tt;
            ln -> next = v[tt % m];
            v[tt%m] = ln;
        }
        return v;
    }
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	ListNode *a = NULL;
	for(int i=0;i<7;i++){
		ListNode *ln = (ListNode *)malloc(sizeof (ListNode));
        ln->val = i;
        ln -> next = a;
        a = ln;
	}
	vector<ListNode*> v = solve(5,a);
	for(ListNode* i:v){
		for(ListNode* t = i;t;t=t->next) {
			cout<<t->val<<" ";
		}
		cout<<endl;
	}
	return 0;
}


