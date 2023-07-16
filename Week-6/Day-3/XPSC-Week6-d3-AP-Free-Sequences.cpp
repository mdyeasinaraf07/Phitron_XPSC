#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int tmp1 = v[j] - v[i];
                int tmp2 = v[k] - v[j];
                if(tmp1 == tmp2){
                    flag = false;
                    break;
                }
            }
        }
    }
    (flag == true) ? cout<< "YES"<< endl : cout<< "NO"<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
