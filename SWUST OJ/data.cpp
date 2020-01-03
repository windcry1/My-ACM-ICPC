#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
int main(void)
{
    ll a, b;
    string n;
    cin >> a >> b >> n;
    cout << gcd(a,b) << endl;
    return 0;
}
