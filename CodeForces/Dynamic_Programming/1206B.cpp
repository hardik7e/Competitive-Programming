      
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
    
    int n;
    cin>>n;
    
    ll odd=0,even=0,count=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==0){
            count++;
        }
        else if(x<0){
            odd++;
            count+=abs(x+1);
        }
        else{
            even++;
            count+=x-1;
        }
    }

    if(odd+even==n){
        if(odd&1){
            count=count+2;
        }
    }
    cout<<count<<'\n';
    return 0;
}
