#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        set <int> st;
        for(int i = 0; i < n; i++){
            int temp;
            cin>> temp;
            st.insert(temp);
        }
        int all_distinct = st.size();
        if((n - all_distinct) % 2 != 0){
            all_distinct -= 1;
            cout<< all_distinct<< endl;
        }
        else{
            cout<< all_distinct<< endl;
        }
    }

    return 0;
}
