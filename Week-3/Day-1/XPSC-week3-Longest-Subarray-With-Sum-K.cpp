#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int k;
    cin>> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin>> a[i];
    }
    int i = 0;
    int j = 0;
    long long int sum = 0;
    int ans = 0;
    while(j < n){
        sum += a[j];

        if(sum > k){
            while(sum > k){
                sum -= a[i];
                i++;
            }
        }
        if(sum == k){
            int length = (j - i) + 1;
            ans = max(length, ans);
        }
        j++;
    }
    cout<< ans<< endl;

    return 0;
}
