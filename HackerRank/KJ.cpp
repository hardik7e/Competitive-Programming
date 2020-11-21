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

//we have to use scanline algo trick https://www.youtube.com/watch?v=TSUvGqRFlug @2:00

int main() {
    int n,p;
    cin>>n>>p;
    if(n==0){
        cout<<p+1<<'\n';
    }
    else{
        vector<int> l(p+2,0);
        vector<pair<int,int>> sl(n);
        for(int i=0;i<n;i++){
            cin>>sl[i].first>>sl[i].second;
        }
        for(int i=0;i<n;i++){
            int s = sl[i].first - sl[i].second;
            int e = sl[i].first + sl[i].second;
            if(s<0){
                s=0;
            }
            if(e>p){
                e=p;
            }
            l[s]+=1;
            l[e+1]-=1;
           
        }
        for(int i=1;i<=p+1;i++){
            l[i]=l[i]+l[i-1];
        }
        int count=0,c=0;
        for(int i=0;i<=p;i++){
            if(l[i]!=1){
                c++;
            }
            else{
                count = max(count,c);
                c=0;
            }
        }
        count = max(count,c);
        cout<<count<<'\n';
        
    }
    return 0;
}