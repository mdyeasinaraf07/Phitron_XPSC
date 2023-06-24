#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long int n;
        cin>> n;
        long long int sum = 0;
        long long int temp = n;
        while(temp != 1){
            sum += temp / 2;
            temp = temp / 2;
        }
        sum += n;
        cout<< sum<< endl;
    }

    return 0;
}
