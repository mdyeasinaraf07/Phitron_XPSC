#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>> s;
        vector <pair <char, char> > p(n);
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            char c1 = s[i];
            char c2 = s[i + 1];
            bool flag = true;
            for(int j = 0; j < n; j++){
                if(p[j].first == c1 && p[j].second == c2){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cnt++;
            }
            p[i].first = s[i];
            p[i].second = s[i + 1];
        }
        cout<< cnt<< endl;
    }


    return 0;
}
