#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>> s;
    int n = stoi(s);
    if(n % 2 == 0){
        cout<< 0<< endl;
    }
    else{
        string str;
        str += s[0];
        int temp = stoi(str);
        if(temp % 2 == 0){
            cout<< 1<< endl;
        }
        else{
            int i = 1;
            bool flag = false;
            while(s[i] != '\0'){
                string str;
                str += s[i];
                int temp = stoi(str);
                if(temp % 2 == 0){
                    flag = true;
                    break;
                }
                i++;
            }
            (flag == true) ? cout<< 2<< endl : cout<< -1<< endl;
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
