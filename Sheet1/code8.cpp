#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int k=1;
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j==n-i-1)
            cout<<k;
            else if(j==n+i-1)
            cout<<k;
            else
            cout<<" ";
        }
        k++;
        cout<<endl;
    }
    k=k-2;
    for(i=1;i<n;i++){
        for(j=0;j<2*n;j++){
            if(j<i){
                cout<<" ";
            }
            else if(j==i)
            cout<<k;
            else if(j==2*n-i-2)
            cout<<k;
            else
            cout<<" ";
        }
        k--;
        cout<<endl;
    }
    return 0;
}