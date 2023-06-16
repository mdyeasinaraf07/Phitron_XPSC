#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    int k;
    cin>> k;
    int n = s.size();
    int i = 0, j = 0;
    int frq[26] = {0};
    int uniq = 0;
    int ans = -1;
    while(j < n){
        char c = s[j];
        if(frq[c - 'a'] == 0){
            uniq++;
        }
        frq[c - 'a']++;
        if(uniq == k){
            ans = max(ans, j - i + 1);
        }
        if(uniq > k){
            while(uniq > k){
                frq[s[i] - 'a']--;
                if(frq[s[i] - 'a'] == 0){
                    uniq--;
                }
                i++;
            }
        }

        j++;
    }
    cout<< ans<< endl;

    return 0;
}
