#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int k=n;
    for(i=0;i<=n;i++){
        int t=k;
        for(j=0;j<=i;j++){
            cout<<t--;
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        int t=k;
        for(j=n-1;j>=i;j--){
            cout<<t--;
        }
        cout<<endl;
    }
    return 0;
}