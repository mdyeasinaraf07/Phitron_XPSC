#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin>> n >> k;
        map <int, pair<int, int>> mp;
        for(int i = 0; i < n; i++){
            int temp;
            cin>> temp;
            if(!mp.count(temp)){
                mp[temp].first = i;
                mp[temp].second = i;
            }
            else{
                mp[temp].second = i;
            }
        }
        while(k--){
            int x, y;
            cin>> x >> y;
            if((mp.count(x)) && (mp.count(y)) && (mp[x].first < mp[y].second)){
                cout<< "YES"<< endl;
            }
            else{
                cout<< "NO"<< endl;
            }

        }

    }

    return 0;
}
