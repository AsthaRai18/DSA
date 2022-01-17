#include<bits/stdc++.h>
using namespace std;
int fab(int n){
    if(n==1||n==0)
    return n;
    return fab(n-1)+fab(n-2);
}
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        cout<<fab(i)<<" ";
        i++;
    }
    return 0;
}