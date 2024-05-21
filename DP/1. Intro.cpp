#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mod2 998244353   
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define MAXI(a)  *max_element(all(a))
#define MINI(a)  *min_element(all(a))
#define read(a)  for(auto &it:a) cin>>it;
#define print(a) for(auto i:a) cout<<i<<" "; cout<<endl;
#define vl vector<ll>
ll modexp(ll a,ll b,ll m){ll ans=1;while(b>0){if(b&1){ans=(ans*1LL*a)%m;}a=(a*1LL*a)%m;b>>=1;}return ans;}
ll mult_mod(ll x, ll y) { return ((x % mod) * (y % mod)) % mod;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll msb(ll x){for (int i = 31; i>=0; --i){if (((x>>i)&1)){return i;}}return 0;}

ll f(ll n,vector<ll>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}

void solve() {
    ll n;cin>>n;
    vector<ll>dp(n+1,-1);
    cout<<f(n,dp);
}

int main() {
    int t;
    // cin >> t;
    t=1;
    while(t--){
       solve();      
    }
    return 0;
}   