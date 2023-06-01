#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int i = 0;
    int j = 0;
    int maxi = 0;
    int sum = 0;
    while(j < n){
        sum += v[j];
        if(j < k - 1){
            j++;
        }
        else{
            maxi = max(sum, maxi);
            sum -= v[i];
            i++;
            j++;
        }
    }
    cout<< maxi<< endl;


    return 0;
}
