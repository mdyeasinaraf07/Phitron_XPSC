#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int i = 10, j = 2;
    int tmp = 10;
    while(tmp < n){
        tmp = i * j;
        j++;
    }
    int ans;
    if(n >= tmp - 5){
        ans = 100 - tmp;
    }
    else{
        ans = 100 - (tmp - 10);
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
