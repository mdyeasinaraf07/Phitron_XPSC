#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(((n & 1) == 0) && (n % 7 == 0)){
        cout<< "Alice"<< endl;
    }
    else if(((n & 1) == 1) && (n % 9 == 0)){
        cout<< "Bob"<< endl;
    }
    else{
        cout<< "Charlie"<< endl;
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
