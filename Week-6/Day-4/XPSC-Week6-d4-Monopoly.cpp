#include <bits/stdc++.h>
using namespace std;

void solve(){
    priority_queue <int> pq;
    for(int i = 0; i < 4; i++){
        int tmp;
        cin>> tmp;
        pq.push(tmp);
    }
    int maxi = pq.top();
    pq.pop();
    int sum = 0;
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
    }
    if(maxi > sum){
        cout<< "YES"<< endl;
    }
    else{
        cout<< "NO"<< endl;
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
