      
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

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        // 1 5 6 3 4 7 8 
        queue<int> q;
        int level = 0,prev = -1;
        q.push(1);
        int i = 1;
        while(!q.empty()){
            int s = q.size();
            for(int j=0;j<s;j++){
                q.pop();
                prev = -1;
                while(i<n){
                    if(v[i]<prev){
                        break;
                    }
                    q.push(v[i]);
                    prev = v[i];
                    i++;
                }
            }
            if(q.size()){
                level++;
            }
        }
        

        cout<<level<<'\n';

    }
    return 0;
}
