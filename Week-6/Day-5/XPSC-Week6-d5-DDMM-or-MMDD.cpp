#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1;
    string s2;
    for(int i = 0; i < 10; i++){
        char c;
        cin>> c;
        if(i < 2){
            s1 += c;
        }
        else if((i > 2) && (i < 5)){
            s2 += c;
        }
    }
    int n1 = stoi(s1);
    int n2 = stoi(s2);
    if((n1 <= 12) && (n2 <= 12)){
        cout<< "BOTH"<< endl;
    }
    else if((n1 <= 12) && (n2 > 12)){
        cout<< "MM/DD/YYYY"<< endl;
    }
    else{
        cout<< "DD/MM/YYYY"<< endl;
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

