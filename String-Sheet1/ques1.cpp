#include<bits/stdc++.h>
using namespace std;
char maxOccur(string s){
    map<char,int> m;
    for(auto i: s){
        m[i]++;
    }
    int x=0;
    char ma;
    for(auto i:m){
        if(i.second>x){
            x=i.second;
            ma=i.first;
        }
    }
    return ma;
}
int main(){
    string n;
    cin>>n;
    cout<<maxOccur(n);
    return 0;
}