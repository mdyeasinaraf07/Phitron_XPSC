#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    int n = s.size();
    if(n & 1){
        cout<< "NO"<< endl;
    }
    else{
        string str1, str2;
        for(int i = 0, j = (n / 2); j < n; j++, i++){
            str1 += s[i];
            str2 += s[j];
        }
        if(str1 == str2){
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
