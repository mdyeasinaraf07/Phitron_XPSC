#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>> arr[i];
        }
        sort(arr, arr + n);
        int sum = 0;
        for(int i = 0, j = n - 1; i <= j; i++, j--){
            sum += abs(arr[i] - arr[j]);
        }
        cout<< sum<< endl;
    }

    return 0;
}
