      
 /*     
             _____        _    _             _   ___  ____
            /  ___|  ____| \  | |___   ___   _  / _ \| __ \
            \___  \ / __||  \ | | __| / __| | || | | |  __/
             ___)  | |__ | | \| |\ \ | |__  | || |_| | |
            |_____/ \___||_| \__|/_/  \___| |_| \___/|_|
*/
#define ll long long
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define plb pull_back
#define mp make_pair
#define ALL(v) v.begin(),v.end()
#define SIZE(v) v.size()
#define SORT(v) sort(ALL(v))

#include <iostream>
#include <bits/stdc++.h>

#define mod 998244353ll

long long binpow(long long a, long long b) {
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%mod;
        }
        a = (a*a)%mod;
        b = b>>1;
    }

    return res%mod;
}

using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> v(2*n);
    for(int i=0;i<2*n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int suma=0,sumb=0;
    for(int i=0;i<n;i++){
        suma+=v[i];
        suma%=mod;
        sumb+=v[n+i];
        sumb%=mod;
    }

    int ans = (sumb -suma)%mod;
    int factorialn = 1;
    for(int i=1;i<=n;i++){
        ans = 1ll * ans * (n+i) % mod;
        factorialn = 1ll * factorialn * i % mod;
    }
    ans = 1ll * ans * binpow(factorialn,mod-2) % mod;
    
    cout<<(ans+mod)%mod<<'\n';

    return 0;
}
