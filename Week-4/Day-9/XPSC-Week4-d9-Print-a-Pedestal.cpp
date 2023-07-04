#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int h3 = (n / 3) - 1;
        int h2 = ((n - h3) / 2) + 1;
        int h1 = n - h3 - h2;
        cout<< h1<< " "<< h2<< " "<< h3<< endl;

    }

    return 0;
}
