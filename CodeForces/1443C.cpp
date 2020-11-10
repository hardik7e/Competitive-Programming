      
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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        int maxv=INT_MIN;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            maxv = max(maxv,v[i]);
        }
        int index = -1;
        for(int i=1;i<=n;i++){
            if(i>1){
                if(v[i]==maxv and v[i-1]<v[i]){
                    index = i;
                }
            }
            if(i<n){
                if(v[i]==maxv and v[i+1]<v[i]){
                    index = i;
                }
            }
        }

        cout<<index<<'\n';

    }
    return 0;
}
