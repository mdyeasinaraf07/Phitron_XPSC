#include <bits/stdc++.h>
using namespace std;

void solve(){
    float n, m;
    cin>> n >> m;
    int first = 100, second = 200;
    first -= (n * first) / 100;
    second -= (m * second) / 100;
    if(first == second){
        cout<< "BOTH"<< endl;
    }
    else if(first < second){
        cout<< "FIRST"<< endl;
    }
    else{
        cout<< "SECOND"<< endl;
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

