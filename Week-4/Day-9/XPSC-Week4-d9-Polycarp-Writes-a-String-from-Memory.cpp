#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>> s;
        int i = 0;
        set <char> st;
        int cnt = 0;
        while(s[i] != '\0'){
            st.insert(s[i]);
            if(st.size() == 4){
                cnt++;
                i--;
                st.clear();
            }
            i++;
        }
        if(!st.empty()){
            cnt++;
        }
        cout<< cnt<< endl;
    }

    return 0;
}
