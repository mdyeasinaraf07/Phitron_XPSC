#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++){
            cin>> v[i];
        }

        // Tle
//        int idx = 0;
//        for(int i = n - 1; i >= 0; i--){
//            for(int j = i - 1; j >= 0; j--){
//                if(v[i] == v[j]){
//                    if((j + 1) < (idx + 1)){
//                        break;
//                    }
//                    idx = max(j, idx) + 1;
//                }
//            }
//        }
//        cout<< idx << endl;

        set <int> s;
        bool flag = false;
        int ans;
        for(int i = n - 1; i >= 0; i--){
            if(s.count(v[i])){
                ans = i;
                flag = true;
                break;
            }
            s.insert(v[i]);
        }
        if(flag == true){
            cout<< ans + 1<< endl;
        }
        else{
            cout<< 0<< endl;
        }
    }

    return 0;
}
