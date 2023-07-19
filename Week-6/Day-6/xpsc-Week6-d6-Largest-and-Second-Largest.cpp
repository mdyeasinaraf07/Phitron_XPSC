#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    set <int> s;
    for(int i = 0; i < n; i++){
        int tmp;
        cin>> tmp;
        s.insert(tmp);
    }
    int sz = s.size() - 2;
    int i = 0;
    int sum = 0;
    for(auto it: s){
        if(i >= sz){
            sum += it;
        }
        i++;
    }
    cout<< sum<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
