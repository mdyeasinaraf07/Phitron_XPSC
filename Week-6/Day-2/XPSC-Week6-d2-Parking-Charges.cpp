#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, h;
    cin>> x >> y >> h;
    if(h == 1){
        cout<< x<< endl;
    }
    else{
        x += (h - 1) * y;
        cout<< x<< endl;
    }
}

int main(){
    solve();

    return 0;
}
