#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>> n;
    map <ll, ll> mp;
    for(int i = 0; i < n; i++){
        ll tmp1, tmp2;
        cin>> tmp1 >> tmp2;
        mp[tmp1]++;
        mp[tmp2 + 1]--;
    }
    int sum = 0, ans = 0;
    for(auto it: mp){
       sum += it.second;
       ans = max(sum, ans);
    }
    if(ans <= 2){
        cout<< "YES"<< endl;
    }
    else{
        cout<< "NO"<< endl;
    }
}

int main(){
    solve();

    return 0;
}
