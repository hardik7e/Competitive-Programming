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
    
    ll n;
    cin>>n;
    map<string,int> mp;
    while(n--){
        string s;
        cin>>s;
        mp[s]++;
        auto itr = mp.find(s);
        if(itr->second>1){
            cout<<s<<itr->second-1<<'\n';
        }
        else{
            cout<<"OK"<<'\n';
        }
    }
    
    return 0;
}
