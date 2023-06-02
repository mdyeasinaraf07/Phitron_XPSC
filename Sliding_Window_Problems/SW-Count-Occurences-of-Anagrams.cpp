#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, pat;
    cin>> s >> pat;
    int n = s.size();
    int k = pat.size();

    vector <int> fr_1(26);
    for(char c: pat){
        fr_1[c - 'a']++;
    }
    int i = 0;
    int j = 0;
    vector <int> fr_2(26);
    int cnt = 0;

    while(j < n){
        fr_2[s[j] - 'a']++;
        if(j < k - 1){
            j++;
        }
        else{
            bool x = true;
            for(int i = 0; i < 26; i++){
                if(fr_1[i] != fr_2[i]){
                    x = false;
                    break;
                }
            }
            if(x == true){
                cnt++;
            }
            j++;
            fr_2[s[i] - 'a']--;
            i++;
        }
    }
    cout<< cnt<< endl;



    return 0;
}
