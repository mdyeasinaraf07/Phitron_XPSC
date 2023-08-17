#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int cn=0;
        int a[n];
        int b[101]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0;i<=101;i++){
            cn=max(b[i],cn);
        }
        cout<<cn<<endl;
    }

    return 0;
}
