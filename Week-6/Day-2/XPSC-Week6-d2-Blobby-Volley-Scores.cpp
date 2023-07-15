#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    int alice = 0;
    int bob = 0;
    if(s[0] == 'A'){
        alice++;
    }
    int i = 0, j = 1;
    while(j < n){
        if(s[i] == s[j]){
            if(s[i] == 'A'){
                alice++;
            }
            else{
                bob++;
            }
        }
        i++;
        j++;
    }
    cout<< alice<< " "<< bob<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
