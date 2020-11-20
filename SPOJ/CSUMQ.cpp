      
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
    int n;
    cin>>n;
    vector<int> c(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i>=1){
            c[i]=x+c[i-1];
        }
        else{
            c[i]=x;
        }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int sum=0;
        if(a>0)sum=c[b]-c[a-1];
        else sum = c[b];
        cout<<sum<<'\n';
    }
    return 0;
}
