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
        int i = n - 1;
        vector <char> v;
        while(i >= 0){
            if(s[i] == '0'){
                string str;
                str += s[i - 2];
                str += s[i - 1];
                int temp = stoi(str);
                char c = 'a' + (temp - 1);
                v.push_back(c);
                i -= 3;
            }
            else{
                string str;
                str += s[i];
                int temp = stoi(str);
                char c = 'a' + (temp - 1);
                v.push_back(c);
                i--;
            }
        }
        for(int i = v.size() - 1; i >= 0; i--){
            cout<< v[i];
        }
        cout<< endl;
    }

    return 0;
}

