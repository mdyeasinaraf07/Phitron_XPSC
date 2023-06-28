#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin>> n >> k;
        map <int, pair <int, int>> mp;
        for(int i = 0; i < n; i++){
            int temp;
            cin>> temp;
            if(mp.count(temp)){
                mp[temp].second = i;
            }
            else{
                mp[temp].first = i;
                mp[temp].second = i;
            }
        }
        while(k--){
            int a, b;
            cin>> a >> b;
            if(!mp.count(a) || !mp.count(b)){
                cout<< "NO"<< endl;
            }
            else if(mp[a].first > mp[b].second){
                cout<< "NO"<< endl;
            }
            else{
                cout<< "YES"<< endl;
            }
        }

    }

    return 0;
}
