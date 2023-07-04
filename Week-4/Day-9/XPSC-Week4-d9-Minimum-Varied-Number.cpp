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
            int i = 9;
            vector <int> v;
            while(n > i){
                n = n - i;
                v.push_back(i);
                i--;
            }
            v.push_back(n);
            for(int i = v.size() - 1; i >= 0; i--){
                cout<< v[i];
            }
            cout<< endl;
        }
    }

    return 0;
}
