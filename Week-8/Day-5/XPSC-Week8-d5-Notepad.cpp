#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    string s;
    cin>> s;
    int i = 0, j = 1;
    bool flag = false;
    while(j < n){
        string str;
        str += s[i];
        str += s[j];
        for(int k = j + 1, l = k + 1; l < n; l++, k++){
            if((s[k] == str[0]) && (s[l] == str[1])){
                flag = true;
                break;
            }
        }
        i++;
        j++;
    }
    (flag == true)? cout<< "YES"<< endl : cout<< "NO"<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
