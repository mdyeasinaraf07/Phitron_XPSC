#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>> n >> x;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    sort(v.begin(), v.end(), greater <int> ());
    int ans = v[x - 1] - 1;
    cout<< ans<< endl;
}

int main(){
    int x;
    cin>> x;
    while(x--){
        solve();
    }
    return 0;
}

