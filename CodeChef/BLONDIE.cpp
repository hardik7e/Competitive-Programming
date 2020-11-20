      
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

int binpow(int a,int b){
    int res = 1;
    while(b>0){
        if(b&1){
            res = res*a;
        }
        a = a*a;
        b = b>>1;
    }

    return res;
}

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> c(n);
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==-1){
                v[i]=(c[i-1]/i);
            }
            if(i>=1){
                c[i]=v[i]+c[i-1];
            }
            else{
                c[i]=v[i];
            }
        }

        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}

