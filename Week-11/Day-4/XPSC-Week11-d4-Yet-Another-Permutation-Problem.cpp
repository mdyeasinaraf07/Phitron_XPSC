#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    set <int> s;
    vector <int> v;
    v.push_back(1);
    for(int i = 2; i <= n; i++){
        int tmp = i;
        while(tmp <= n){
            if(!s.count(tmp)){
                v.push_back(tmp);
            }
            s.insert(tmp);
            tmp *= 2;
        }
    }

    for(int i = 0; i < n; i++){
        cout<< v[i]<< " ";
    }
    cout<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
