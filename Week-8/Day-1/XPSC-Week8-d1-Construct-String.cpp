#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    vector <char> v;
    int i = 0, j = 1, cnt = 1;
    while(s[j] != '\0'){
        if(s[i] != s[j]){
            if(cnt & 1){
                v.push_back(s[i]);
            }
            else{
                v.push_back(s[i]);
                v.push_back(s[i]);
            }
            cnt = 1;
        }
        else{
            cnt++;
        }
        i++;
        j++;
    }
    if(cnt & 1){
        v.push_back(s[i]);
    }
    else{
        v.push_back(s[i]);
        v.push_back(s[i]);
    }
    for(int i = 0; i < v.size(); i++){
        cout<< v[i];
    }
    cout<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}

