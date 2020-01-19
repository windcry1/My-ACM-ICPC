ll qmi(ll a, ll b, ll c){
    ll ans = 1;
    while(b){
        if(b & 1) ans = (ans*a)%c;
        b>>=1;
        a = (a*a)%c;
    }
    return ans;
}
void Get_Fac(ll m){
    fac[0] = 1;
    for(int i=1; i<=m; i++)
        fac[i] = (fac[i-1]*i) % mod;
}
ll Lucas(ll n, ll m, ll p){
    ll ans = 1;
    if(n==0) return 0;
    while(n && m){
        ll a = n % p;
        ll b = m % p;
        if(a < b) return 0;
        ans = ((ans*fac[a]%p)*(qmi(fac[b]*fac[a-b]%p,p-2,p))) % p;
        n /= p;
        m /= p;
    }
    return ans;
}
