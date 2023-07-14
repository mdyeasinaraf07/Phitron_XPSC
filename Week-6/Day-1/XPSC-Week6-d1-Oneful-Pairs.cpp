#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin>> a >> b;
    int tmp = (a + b) + (a * b);
    if(tmp == 111){
        cout<< "YES"<< endl;
    }
    else{
        cout<< "NO"<< endl;
    }
}

int main(){
    solve();

    return 0;
}
