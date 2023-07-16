#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int f_mini = abs(v[0] - v[1]);
    int l_mini = abs(v[n - 2] - v[n - 1]);
    int mini = min(f_mini, l_mini);
    int i = 1;
    while(i < n - 1){
        int tmp1 = abs(v[i - 1] - v[i]);
        int tmp2 = abs(v[i] - v[i + 1]);
        int maxi = max(tmp1, tmp2);
        mini = min(mini, maxi);
        i++;
    }
    cout<< mini<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
