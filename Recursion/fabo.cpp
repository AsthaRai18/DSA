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
    int i=0,s=0;
    while(i<n){
        s+=fab(i);
        i++;
    }
    cout<<s;
    return 0;
}