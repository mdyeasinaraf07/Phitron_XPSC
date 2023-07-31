#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int tmp1, tmp2;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cin>> tmp1;
        }
        else{
            cin>> tmp2;
            int deff = tmp2 - tmp1;
            mini = min(mini, deff);
            tmp1 = tmp2;
        }
    }
    if(mini < 0){
        cout<< 0<< endl;
    }
    else if(mini == 0){
        cout<< 1<< endl;
    }
    else{
        int ans = (mini / 2) + 1;
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


