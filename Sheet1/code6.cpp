#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int k=1;
    for(i=0;i<n;i++){
        int t=k;
        for(j=n-1;j>=0;j--){
            if(j>i){
                cout<<" ";
            }
            else
            cout<<t--;
        }
        for(j=0;j<i;j++){
            cout<<t--;
        }
        k=k+2;
        cout<<endl;
    }
    return 0;
}