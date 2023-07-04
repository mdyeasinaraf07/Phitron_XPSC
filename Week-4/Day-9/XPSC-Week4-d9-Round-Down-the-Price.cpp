#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int i = 0;
        while(pow(10, i) <= n){
            i++;
        }
        i--;
        int result = n - pow(10, i);
        cout<< result<< endl;
    }

    return 0;
}
