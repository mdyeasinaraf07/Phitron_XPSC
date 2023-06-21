#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        for(int i = 0; i < n; i++){
            char c;
            cin>> c;
            if(c < 'a'){
                c += 32;
                s += c;
            }
            else{
                s += c;
            }
        }
        s.erase(unique(s.begin(), s.end()), s.end());
        if(s == "meow"){
            cout<< "YES"<< endl;
        }
        else{
            cout<< "NO"<< endl;
        }
    }

    return 0;
}
