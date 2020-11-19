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
        ll n,m;
        cin>>n>>m;

        vector<string> v(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            for(int j=0;j<m;j++){
                if(v[i][j]==49){
                    count++;
                }
            }
        }
        cout<<count*3<<'\n';
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==49){
                    if(i==n-1 and j==m-1){
                        cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j+1<<" "<<i+1<<" "<<j<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j<<" "<<i+1<<" "<<j<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j<<" "<<i<<" "<<j+1<<'\n';
                    }
                    else if(i==n-1){
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i<<" "<<j+2<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i<<" "<<j+1<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j+1<<" "<<i<<" "<<j+2<<'\n';
                    }
                    else if(j==m-1){
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i+2<<" "<<j<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+1<<" "<<i+2<<" "<<j<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i+2<<" "<<j+1<<'\n';
                    }
                    else{
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i+2<<" "<<j+1<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+1<<" "<<i+2<<" "<<j+2<<'\n';
                        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i+2<<" "<<j+2<<'\n';                    
                    }
                }
            }
        }

    }
    
    return 0;
}
