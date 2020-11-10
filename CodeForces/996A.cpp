      
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
    vector<int> v = {1,5,10,20,100};
    int change=0;
    for(int i=4;i>=0;i--){
        while(n>=v[i]){
            n=n-v[i];
            change++;
        }
        if(n<=0){
            break;
        }
    }
    cout<<change<<'\n';
    return 0;
}
