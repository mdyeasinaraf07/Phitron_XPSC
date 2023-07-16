#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin>> tmp;
        if(tmp == 0){
            cout<< 1<< " ";
        }
        else{
            cout<< 0<< " ";
        }
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
