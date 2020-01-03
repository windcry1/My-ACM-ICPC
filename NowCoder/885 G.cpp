//????????  awsl 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =  1e6+10;
const ll MOD = 998244353;
  
int trie[maxn][15]; //???
int cntword[maxn];  //?????????
int fail[maxn];     //????????
int cnt = 0;
void insertWords(char s){
    int root = 0;
    int next = s - '0';
    if(!trie[root][next])
        trie[root][next] = ++cnt;
    root = trie[root][next];
    cntword[root]++;      //???????+1
}
void getFail(){
    queue <int> q;
    for(int i=0;i<10;i++){      //????????????????
        if(trie[0][i]){
            fail[trie[0][i]] = 0;
            q.push(trie[0][i]);
        }
    }
  
//fail[now]    ->????now??????????
////tire[now][i] -> ??????i+'a'???????tire[now][i]
    while(!q.empty()){
        int now = q.front();
        q.pop();
  
        for(int i=0;i<10;i++){      //??26???
            if(trie[now][i]){
                //???????????i+'a',?
//????????????(((?????)?????????????)??????)
                //???,????????????
  
                fail[trie[now][i]] = trie[fail[now]][i];
                q.push(trie[now][i]);
            }
            else//??????????????
                //??????fail????????
                trie[now][i] = trie[fail[now]][i];
        }
    }
}
  
  
ll query(string s){
    ll now = 0,ans = 0;
    for(unsigned i=0;i<s.size();i++){    //?????
        now = trie[now][s[i]-'0'];  //?s[i]?????
        for(int j=now;j && cntword[j]!=-1;j=fail[j]){
            //??????,??????(????????????????).
            ans += cntword[j];
            ans%=MOD;
            cntword[j] = -1;    //??????????,??????
        }
    }
    return ans;
}
ll quick_pow(int a,int b){
    ll res = 1;
    while(b){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res%MOD;
}
int main() {
    int T;
    cin>>T;
    while(T--)
    {
    	string s1,s2;
    	int n,m;
	    memset(trie,0,sizeof trie);
	    memset(cntword,0,sizeof cntword);
	    memset(fail,0,sizeof fail);
	    cnt = 0;
	    cin >> n >> m;
	    char c;
	    for(int i=0;i<n;i++){
	        cin >> c;
	        s1.push_back(c);
	        insertWords(c);
    	}
	    fail[0] = 0;
	    getFail();
	    cin>>s2;
	    ll temp = 0;
	    for(int i=0;i<n;i++)
	        if(s1[i]=='0')
	            temp+=quick_pow(2,n-i-1)-1,temp%=MOD;
		if(s1==s2)
			cout<<0<<endl;
		else
	    	cout << ((quick_pow(2,n)-1-n-temp-query(s2))%MOD+MOD)%MOD << endl;
	}
    return 0;
}
