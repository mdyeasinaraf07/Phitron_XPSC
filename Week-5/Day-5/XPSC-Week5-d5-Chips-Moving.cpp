#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    int odd = 0;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        if(v[i] % 2 != 0){
            odd++;
        }
    }
    n -= odd;
    int ans = min(odd, n);
    cout<< ans<< endl;
}

int main(){
    solve();

    return 0;
}
