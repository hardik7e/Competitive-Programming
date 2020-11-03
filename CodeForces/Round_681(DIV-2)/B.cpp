      
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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        
        int front = -1, end = -1;
        for(int i=0;i<s.size();i++){
            if(front==-1){
            if(s[i]==49){
                front = i;
            }}
            if(end==-1){
            if(s[s.size()-1-i]==49){
                end=s.size()-1-i;
            }}
        }

        if(front==end and front==-1){
            cout<<0<<'\n';
        }
        else{
            int count = 0,ans = a;
            for(int i=front;i<=end;i++){
                if(s[i]==48){
                    count++;
                }
                else{
                    ans+=min(a,count*b);
                    count=0;
                }
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
