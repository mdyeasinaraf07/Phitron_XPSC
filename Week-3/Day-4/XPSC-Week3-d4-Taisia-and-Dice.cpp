#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, s, r;
        cin>> n >> s >> r;
        int maxi_val = s - r;
        s = r;
        vector <int> v(n);
        v[0] = maxi_val;
            int i = 1;
            while(s != 0){
                v[i] += 1;
                s--;
                i++;
                if(i == n){
                    i = 1;
                }
            }
        for(int i = 0; i < n; i++){
            cout<< v[i]<< " ";
        }
        cout<< endl;
    }

    return 0;
}
