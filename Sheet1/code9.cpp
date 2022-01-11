#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    char k=char(n+64);
    for(i=0;i<n;i++){
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