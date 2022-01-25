#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s1,string s2){
    s1=s1+s1;
    if(s1.find(s2)!=string::npos){
        return true;
    }
    else
        return false;
}
 int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(checkRotation(s1,s2))
        cout<<"Yes";
    else 
        cout<<"No";
    return 0;
 }