#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector <long long> v(7);
    for(int i = 0; i < 7; i++){
        cin>> v[i];
    }
    int tmp1 = v[0] + v[1] + v[2];
    int tmp2 = v[0] + v[1] + v[3];
    int tmp3 = v[0] + v[2] + v[3];
    int tmp4 = v[1] + v[2] + v[3];
    if(tmp1 == v[6]){
        cout<< v[0]<< " "<< v[1]<< " "<< v[2]<<endl;
    }
    else if(tmp2 == v[6]){
        cout<< v[0]<< " "<< v[1]<< " "<< v[3]<<endl;
    }
    else if(tmp3 == v[6]){
        cout<< v[0]<< " "<< v[2]<< " "<< v[3]<<endl;
    }
    else{
        cout<< v[1]<< " "<< v[2]<< " "<< v[3]<<endl;
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
