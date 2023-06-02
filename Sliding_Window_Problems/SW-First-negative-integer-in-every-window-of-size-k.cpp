/*n = 5
k = 2
arr[] = {-8, 2, 3, -6, 10}
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }

    vector <int> negative;
    queue <int> q;
    int i = 0, j = 0;
    while(j < n){
        if(v[j] < 0){
            q.push(v[j]);
        }
        if(j < k - 1){
            j++;
        }
        else{
            if(!q.empty()){
                negative.push_back(q.front());
            }
            else{
                negative.push_back(0);
            }
            j++;
            if(v[i] < 0){
                q.pop();
            }
            i++;
        }

    }
    for(int i = 0; i < negative.size(); i++){
        cout<< negative[i]<< " ";
    }


    return 0;
 }
