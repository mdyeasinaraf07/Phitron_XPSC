#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    map <char, int> mp;
    for(int i = 0; i < n; i++){
        char c;
        cin>> c;
        mp[c]++;
    }
    if(mp.size() == 1){
        for(auto it: mp){
            if((it.second > 2) && ((it.second & 1) == 1)){
                cout<< 2<< endl;
            }
            else{
                cout<< 1<< endl;
            }
        }
    }
    else{
        int cnt = 0;
        for(auto it: mp){
            if(it.second & 1){
                cnt++;
            }
        }
        if(cnt > 1){
            cout<< 0<< endl;
        }
        else{
            cout<< 1<< endl;
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
