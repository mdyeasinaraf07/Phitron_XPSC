#include <bits/stdc++.h>
using namespace std;

int deff(string s1, string s2){
    int sum = 0;
    for(int i = 0; i < s1.size(); i++){
        sum += abs(s1[i] - s2[i]);
    }
    return sum;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, m;
        cin>> n >> m;
        vector <string> s(n);
        for(int i = 0; i < n; i++){
            cin>> s[i];
        }
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = min(ans, deff(s[i], s[j]));
            }
        }
        cout<< ans<< endl;
    }

    return 0;
}
