#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(n==1){
        cout<<i<<"^"<<i;
        return ;
    }
    cout<<i<<"^"<<i<<" + ";
    func(i+1,n-1);
    
}
int main(){
    int n;
    cin>>n;
    func(1,n);
    return 0;
}