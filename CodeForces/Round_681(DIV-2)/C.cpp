      
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

using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p[i].first=x;
        }

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            p[i].second=x;
        }
        sort(p.rbegin(),p.rend());
        
        ll sum = 0;
        for(int i=0;i<n;i++){
            if(sum>p[i].first){continue;}
            if(p[i].first<=sum+p[i].second){
                sum=p[i].first;
            }
            else{
                sum+=p[i].second;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}
