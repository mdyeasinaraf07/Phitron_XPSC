#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int cnt = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    for(int i = 0; i < n; i++){
        int a;
        cin>> a;
        if(v[i] <= a){
            int tmp = v[i] * 2;
            if(tmp >= a){
                cnt++;
            }
        }
        else{
            int tmp = a * 2;
            if(tmp >= v[i]){
                cnt++;
            }
        }
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


