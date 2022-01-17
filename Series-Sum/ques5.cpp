#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int sum=1,x=1,y;
    for(int i=2;i<=n;i++){
        if(i%2!=0){
            y=x*3/2;
        sum+=y;
        }
        else{
             y=2*x;
        sum+=y;
        }
        x=y;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<endl<<func(n);
    return 0;
}