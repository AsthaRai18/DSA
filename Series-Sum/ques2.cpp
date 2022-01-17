#include<bits/stdc++.h>
using namespace std;
int func(int n){
    return (n*(n+1)*(2*n+4))/12;
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}