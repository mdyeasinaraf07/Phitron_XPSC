#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t = 1;
    while(true){
        int n, m;
        cin>> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        cout<< "CASE# "<< t<< ":"<< endl;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < m; i++){
            int tmp;
            cin>> tmp;
            auto it = lower_bound(v.begin(), v.end(), tmp);
            int idx = it - v.begin();
            if(idx < 0 || v[idx] != tmp){
                cout<< tmp<< " not found"<< endl;
            }
            else{
                cout<< tmp<< " found at "<< idx + 1<< endl;
            }
        }
        t++;
    }

}

int main(){
    solve();

    return 0;
}
