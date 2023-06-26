#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int i =0;
        int temp = 10;
        while(pow(temp, i) <= n){
            i++;
        }
        i--;
        int ans = n - (pow(temp, i));
        cout<< ans<< endl;
    }

    return 0;
}
