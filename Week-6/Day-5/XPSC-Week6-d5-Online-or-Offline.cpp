#include <bits/stdc++.h>
using namespace std;

void solve(){
    float x, y;
    cin>> x >> y;
    float tmp = x - ((x * 10) / 100);
    if(tmp == y){
        cout<< "EITHER"<< endl;
    }
    else if(tmp < y){
        cout<< "ONLINE"<< endl;
    }
    else{
        cout<< "DINING"<< endl;
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


