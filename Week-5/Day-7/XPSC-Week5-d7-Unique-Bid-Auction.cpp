#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    map <int, pair <int, int> > mp;
    for(int i = 0; i < n; i++){
        int tmp;
        cin>> tmp;
        mp[tmp].first++;
        mp[tmp].second = i + 1;
    }
    int ans = -1;
    for(auto it: mp){
        if(mp[it.first].first == 1){
            ans = mp[it.first].second;
            break;
        }
    }
    cout<< ans<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
