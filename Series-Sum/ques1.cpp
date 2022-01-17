#include<bits/stdc++.h>
using namespace std;
float func(int n){
    if(n==1)
    return 1;
    return 1/pow(n,2)+func(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}