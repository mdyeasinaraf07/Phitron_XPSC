#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>> v[i];
    }
    int i = 0;
    int j = 0;
    multiset <int> ml;
    vector <int> maxi;
    while(j < n){
        ml.insert(v[j]);
        if(j < k - 1){
            j++;
        }
        else{
            maxi.push_back(*ml.rbegin());
            j++;
            ml.erase(ml.find(v[i]));
            i++;
        }
    }
    for(int i = 0; i < maxi.size(); i++){
        cout<< maxi[i]<< " ";
    }


    return 0;
}


//N = 9, K = 3
//arr[] = 1 2 3 1 4 5 2 3 6
