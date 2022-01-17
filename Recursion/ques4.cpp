#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(n==0){
        return ;
    }
    cout<<i<<" ";
    func(i+2,n-1);
    
}
int main(){
    int n;
    cin>>n;
    func(1,n);
    return 0;
}