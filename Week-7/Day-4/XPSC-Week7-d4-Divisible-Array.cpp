#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    int sum = 0;
    for(int i = 1; i < n; i++){
        v[i] = i + 1;
        sum += v[i];
    }
    sum += 1;
    if(sum % n == 0){
        v[0] = 1;
        for(int i = 0; i < n; i++){
            cout<< v[i]<< " ";
        }
        cout<< endl;
    }
    else{
        int tmp = sum;
        while(tmp % n != 0){
            tmp++;
        }
        v[0] = (tmp - sum) + 1;
        for(int i = 0; i < n; i++){
            cout<< v[i]<< " ";
        }
        cout<< endl;
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
