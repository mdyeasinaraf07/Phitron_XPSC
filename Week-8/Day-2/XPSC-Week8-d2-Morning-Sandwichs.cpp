#include <bits/stdc++.h>
using namespace std;

void solve(){
    int b, c, h;
    cin>> b >> c >> h;
    c += h;
    b--;
    int cnt = 1;
    int temp = c;
    while((b != 0) && (temp != 0)){
        cnt++;
        b--;
        temp--;
    }
    cnt += c - temp;
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



