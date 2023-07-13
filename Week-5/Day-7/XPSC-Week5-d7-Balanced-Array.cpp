#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    if(n % 4 != 0){
        cout<< "NO"<< endl;
    }
    else{
        cout<< "YES"<< endl;
        int sum1 = 0;
        for(int i = 2; i <= n; i += 2){
            sum1 += i;
            cout<< i<< " ";
        }
        int sum2 = 0;
        for(int i = 1; i <= n; i += 2){
            sum2 += i;
            if(i == n - 1){
                if(sum1 != sum2){
                    i += n / 2;
                }
            }
            cout<< i<< " ";
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
