#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(n==1){
        cout<<"1/"<<pow(3,i);
        return ;
    }
        cout<<"1/"<<pow(3,i)<<" + ";
    func(i+1,n-1);
    
}
int main(){
    int n;
    cin>>n;
    func(0,n);
    return 0;
}