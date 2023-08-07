#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    if(n != 5){
        cout<< "NO"<< endl;
    }
    else{
        sort(s.begin(), s.end());
        string str = "Timru";
        if((s[0] == 'T') && (str == s)){
            cout<< "YES"<< endl;
        }
        else{
            cout<< "NO"<< endl;
        }
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


