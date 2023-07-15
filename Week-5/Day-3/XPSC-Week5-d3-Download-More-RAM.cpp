#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>> n >> k;
    vector <int> v1(n);
    for(int i = 0; i < n; i++){
        cin>> v1[i];
    }
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int tmp;
        cin>> tmp;
        mp[v1[i]] += tmp;
    }
    int sum = k;
    for(auto it: mp){
        if(it.first > sum){
            break;
        }
        sum += it.second;
    }
    cout<< sum<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
