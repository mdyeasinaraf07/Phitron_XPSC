#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n, m, h;
        cin>> n >> m >> h;
        priority_queue <long long> c;
        priority_queue <long long> p;
        for(int i = 0; i < n; i++){
            int temp;
            cin>> temp;
            c.push(temp);
        }
        for(int i = 0; i < m; i++){
            int temp;
            cin>> temp;
            p.push(temp);
        }
        long long ans = 0;
        while(!c.empty() && !p.empty()){
            long long sum = p.top() * h;
            p.pop();
            ans += min(c.top(), sum);
            c.pop();
        }
        cout<< ans<< endl;
    }

    return 0;
}
