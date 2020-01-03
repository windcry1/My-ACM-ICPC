/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/28/2019 7:38:42 AM
*************************************************************************/
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
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
const int ASCII = 128;
class AC_automation{
	class node{
		public:
			string str;
			node *table[ASCII];
			node *fail;
			node(){
				for(int i=0;i<ASCII;i++) table[i] = NULL;
				fail = NULL;
			}
			bool isword(){
				return str != "";
			}
			inline void operator =(const node a){
				str = a.str;
				for(int i=0;i<ASCII;i++){
					table[i]=a.table[i];
				}
				fail=a.fail;
			}
	};
	public:
		AC_automation(vector<string> ve){
			root = *(new node);
			target = ve;
			build_trie();
			build_AC_automation();
		}
		void build_trie(){
			for(auto tarstr:target){
				node curr = root;
				for(auto &i:tarstr){
					if(curr.table[(int)i] == NULL)
						curr.table[(int)i] = new node;
					curr = *curr.table[(int)i];
				}
			}
		}
		
		void build_AC_automation(){
			queue<node> q;
			for(auto &i:root.table){
				if(i != NULL){
					i->fail = &root;
					q.push(*i);
				}
			}
	
			while(!q.empty()){
				node p = q.front(); q.pop();
				for(int i = 0; i < ASCII; i++){
					if(p.table[i] != NULL){
						q.push(*p.table[i]);
						node *failto = p.fail;
						while(true){
							if(failto == NULL){
								p.table[i]->fail = &root;
								break;
							}
							if(failto->table[i] != NULL){
								p.table[i]->fail = failto->table[i];
								break;
							}
							else failto = failto->fail;
						}
					}
				}
			}
		}
		
		unordered_map<string,vector<int> > find(string text){
			result.clear();
			for(auto s:target){
				vector<int> temp;
				result.emplace(s,temp);
				node curr = root;
				int i = 0;
				while(i < (int)text.length()){
					char ch = text[i];
					if(curr.table[(int)ch] != NULL){
						curr = *curr.table[(int)ch];
						if(curr.isword()){
							auto t = result.find(curr.str);
							t->second.push_back(i - curr.str.length() + 1);
						}
						if(curr.fail != NULL && curr.fail->isword()){
							auto t = result.find(curr.fail->str);
							t->second.push_back(i - curr.fail->str.length() + 1);
						}
						++i;
					}
					else{
						if(curr.fail==NULL) curr=root,++i;
						else curr = *curr.fail;
					}
				}
			}
			return result;
		}
	private:
		node root;
		vector<string> target;
		unordered_map<string,vector<int> > result;
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	vector<string> target;
	int n;cin>>n;
	string s;
	for(int i=0;i<n;i++) cin>>s,target.push_back(s);
	cin>>s;
	AC_automation ac(target);
	unordered_map<string,vector<int> > res = ac.find(s);
	cout<<s<<endl;
	for(auto i:res){
		cout<<i.first<<" : "<<endl;
		for(auto j:i.second){
			cout<<j<<" ";
		}
	}
	return 0;
}

