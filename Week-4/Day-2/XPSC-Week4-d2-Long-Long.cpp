#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        long long n;
        cin>> n;
        vector <long long> v;
        for(long long i = 0; i < n; i++){
            long long temp;
            cin>> temp;
            if(temp != 0){
                v.push_back(temp);
            }
        }
        long long i = 0;
        long long cnt = 0;
        long long sum = 0;
        while(i < v.size()){
            if(v[i] < 0){
                cnt++;
                while(v[i] < 0 && i < v.size()){
                    sum += (v[i] * (-1));
                    i++;
                }
            }
            else if(v[i] > 0){
                sum += v[i];
                i++;
            }

        }
        cout<< sum<< " "<< cnt<< endl;
    }

    return 0;
}
