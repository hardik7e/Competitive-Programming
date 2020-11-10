      
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
    if(n&1 || n==2){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }

    return 0;
}
