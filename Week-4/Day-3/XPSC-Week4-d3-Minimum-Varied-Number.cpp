#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        if(n < 10){
            cout<< n<< endl;
        }
        else{
            vector <int> frq(10);
            int cnt = 9;
            while(1){
                n = n - cnt;
                if(n < cnt){
                    break;
                }
                cnt--;
            }
            cout<< n;
            for(int i = cnt; i <= 9; i++){
                cout<< i;
            }
            cout<< endl;
        }
    }

    return 0;
}
