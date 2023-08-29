#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector < vector<int> > arr(n, vector <int> (n));
    for(int i = 0, j = n - 1; i < n; i++, j--){
        for(int k = 0; k < n; k++){
            if(i == k && j == k){
                arr[i + 1][k] = 1;
                arr[i][k + 1] = 1;
                arr[i][k - 1] = 1;
            }
            if(k == i){
                arr[i][k] = 1;
            }
            else if(k == j){
                arr[i][k] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<< arr[i][j]<< " ";
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

