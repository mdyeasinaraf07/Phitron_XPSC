#include <bits/stdc++.h>
using namespace std;

int n, m;
bool is_inside(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        cin>> n >> m;
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>> arr[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int tempi = i;
                int tempj = j;
                int sum = 0;
                while(is_inside(tempi, tempj)){
                    sum += arr[tempi][tempj];
                    tempi -= 1;
                    tempj += 1;
                }
                tempi = i;
                tempj = j;
                while(is_inside(tempi, tempj)){
                    sum += arr[tempi][tempj];
                    tempi += 1;
                    tempj -= 1;
                }
                sum -= arr[i][j];
                tempi = i;
                tempj = j;
                while(is_inside(tempi, tempj)){
                    sum += arr[tempi][tempj];
                    tempi -= 1;
                    tempj -= 1;
                }
                sum -= arr[i][j];
                tempi = i;
                tempj = j;
                while(is_inside(tempi, tempj)){
                    sum += arr[tempi][tempj];
                    tempi += 1;
                    tempj += 1;
                }
                sum -= arr[i][j];
                ans = max(ans, sum);
            }

        }
        cout<< ans<< endl;
    }

    return 0;
}
