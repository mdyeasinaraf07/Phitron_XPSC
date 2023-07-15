#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n & 1){
        cout<< -1<< endl;
    }
    else{
        while(n != 0){
            cout<< n<< " ";
            n--;
        }
        cout<< endl;
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
