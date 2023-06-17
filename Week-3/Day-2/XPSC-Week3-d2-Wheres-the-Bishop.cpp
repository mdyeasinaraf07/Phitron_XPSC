#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n = 8;
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char c;
                cin>> c;
                if(c == '.'){
                    arr[i][j] = 0;
                }
                else{
                    arr[i][j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((arr[i - 1][j + 1] == 1) && (arr[i + 1][j - 1] == 1) && (arr[i - 1][j - 1]) && (arr[i + 1][j + 1])){
                    cout<< i + 1<< " "<< j + 1<< endl;
                    break;
                }
            }
        }
    }

    return 0;
}
