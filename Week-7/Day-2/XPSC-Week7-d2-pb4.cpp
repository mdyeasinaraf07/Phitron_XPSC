#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n == 50){
        cout<< 0<< endl;
    }
    else if(n < 50){
        int tmp = 50 - n;
        if(tmp & 1){
            int ans = (tmp / 2) + 3;
            cout<< ans<< endl;
        }
        else{
            cout<< tmp / 2<< endl;
        }
    }
    else{
        int tmp = ((n - 50) / 3) * 3;
        int ans = n - tmp;
        if(ans == 50){
            int tmp2 = ((n - 50) / 3);
            cout<< tmp2<< endl;
        }
        else if(ans == 51){
            int tmp2 = ((n - 50) / 3) + 2;
            cout<< tmp2<< endl;
        }
        else{
            int tmp2 = ((n - 50) / 3) + 4;
            cout<< tmp2<< endl;
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

