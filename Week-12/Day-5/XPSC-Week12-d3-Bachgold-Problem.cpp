#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n % 2 == 0){
        int tmp = n / 2;
        cout<< tmp<< endl;
        for(int i = 0; i < tmp; i++){
            cout<< 2<< " ";
        }
        cout<< endl;
    }
    else{
        int tmp = n / 2;
        cout<< tmp<< endl;
        for(int i = 0; i < tmp - 1; i++){
            cout<< 2<< " ";
        }
        cout<< 3<< endl;
    }
}

int main(){
    solve();

    return 0;
}
