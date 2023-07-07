#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    int tmp = n - 2;
    vector <string> v(tmp);
    for(int i = 0; i < tmp; i++){
        cin>> v[i];
    }
    string str;
    str += v[0];
    int i = 1;
    while(str.size() < n){
        while(i < tmp){
            string s;
            s += v[i];
            if(str[str.size() - 1] != s[0]){

                str += s[0];
                str += s[1];
            }
            else{
                str += s[1];
            }
            i++;
        }
        if((str[str.size() - 1] == 'a') && (str.size() < n)){
            str += 'b';
        }
        else if((str[str.size() - 1] == 'b') && (str.size() < n)){
            str += 'a';
        }
    }
    cout<< str<< endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
