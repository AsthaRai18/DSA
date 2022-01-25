#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    string s1="";
    map<char,int> m;
    for(auto i:s){
        m[i]++;
        if(m[i]==1){
            s1+=i;
        }
    }
    return s1;
}
int main(){
    string s;
    cin>>s;
    cout<<removeDuplicate(s);
    return 0;
}