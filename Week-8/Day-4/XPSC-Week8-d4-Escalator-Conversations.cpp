#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k, h;
    cin>> n >> m >> k >> h;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        cin>> tmp;
        if(tmp < h){
            int i = 1;
            while((tmp < h) && (i < m)){
                tmp += k;
                i++;
            }
            if(tmp == h){
                cnt++;
            }
        }
        else if(tmp > h){
            int i = 1;
            int tmp2 = h;
            while((tmp2 < tmp) && (i < m)){
                tmp2 += k;
                i++;
            }
            if(tmp2 == tmp){
                cnt++;
            }
        }
    }
    cout<< cnt<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
