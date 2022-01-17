#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(n==0){
        return ;
    }
    int c=0;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0)
            c=1;
    }
    if(c==0){
        cout<<i<<" ";
        func(i+1,n-1);
    }
    else
        func(i+1,n);
    
}
int main(){
    int n;
    cin>>n;
    func(2,n);
    return 0;
}