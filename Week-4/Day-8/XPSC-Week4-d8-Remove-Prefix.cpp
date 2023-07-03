#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
        }
        set <int> s;
        int ans = 0;
        for(int i = n - 1; i >= 0; i--){
            while(s.count(v[i])){
                ans = i + 1;
                break;
            }
            if(ans > 0){
                break;
            }
            s.insert(v[i]);
        }
        cout<< ans<< endl;
    }

    return 0;
}
