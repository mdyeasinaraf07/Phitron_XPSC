#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>> n;
    if(n % 2 == 0){
        int ans = (n / 2) - 1;
        cout<< ans<< endl;
    }
    else{
        int ans = n / 2;
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
