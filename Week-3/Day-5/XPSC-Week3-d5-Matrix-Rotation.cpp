#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a, b, c, d;
        cin>> a >> b >> d >> c;
        bool flag = false;
        if((a < b) && (a < d) && (b < c) && (d < c)){
            flag = true;
        }
        else{
            for(int i = 0; i < 3; i++){
                int temp1 = b;
                b = a;
                int temp2 = c;
                c = temp1;
                temp1 = d;
                d = temp2;
                a = temp1;
                if((a < b) && (a < d) && (b < c) && (d < c)){
                    flag = true;
                    break;
                }
            }
        }
        if(flag == true){
            cout<< "YES"<< endl;
        }
        else{
            cout<< "NO"<< endl;
        }
    }


    return 0;
}
