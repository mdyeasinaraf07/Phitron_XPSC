#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>> s;
        int cnt = 0;
        string temp = "314159265358979323846264338327";
        if(s[0] != '3'){
            cout<< cnt<< endl;
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] != temp[i]){
                    break;
                }
                else{
                    cnt++;
                }
            }
            cout<< cnt<< endl;
        }
    }

    return 0;
}
