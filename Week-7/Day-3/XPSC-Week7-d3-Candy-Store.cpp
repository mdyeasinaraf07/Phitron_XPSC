#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y;
    cin>> x >> y;
    if(y <= x){
        cout<< y<< endl;
    }
    else{
        y = (y - x) * 2;
        int ans = x + y;
        cout<< ans<< endl;
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
