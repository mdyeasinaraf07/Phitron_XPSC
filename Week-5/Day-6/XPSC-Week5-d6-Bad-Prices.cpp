#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int cnt = 0;
    int mini = INT_MAX;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] > mini){
            cnt++;
        }
        mini = min(mini, v[i]);
    }
    cout<< cnt<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
