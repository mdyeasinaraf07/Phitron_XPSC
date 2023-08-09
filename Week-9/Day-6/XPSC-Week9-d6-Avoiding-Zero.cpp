#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector <int> v(n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin>> v[i];
        sum += v[i];
    }
    if(sum == 0){
        cout<< "NO"<< endl;
    }
    else{
        cout<< "YES"<< endl;
        if(sum > 0){
            sort(v.begin(), v.end(), greater <int>());
            for(int i = 0; i < n; i++){
                cout<< v[i]<< " ";
            }
            cout<< endl;
        }
        else{
            sort(v.begin(), v.end());
            for(int i = 0; i < n; i++){
                cout<< v[i]<< " ";
            }
            cout<< endl;
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
