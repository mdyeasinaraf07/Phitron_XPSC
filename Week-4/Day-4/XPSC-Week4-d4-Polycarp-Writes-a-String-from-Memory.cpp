#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>> s;
        set <char> st;
        int i = 0;
        int cnt = 1;
        while(s[i] != '\0'){
            st.insert(s[i]);
            if(st.size() > 3){
                cnt++;
                st.clear();
                i--;
            }

            i++;
        }
        cout<< cnt<< endl;
    }

    return 0;
}
