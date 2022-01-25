#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1,string s2){
    map<char,int> m;
    for(auto i:s1){
        m[i]++;
    }
    map<char,int> m1;
    for(auto i:s2){
        m1[i]++;
    }
    for(auto i:s2){
        if(m[i]!=m1[i])
        return false;
    }
    return true;
}
int main(){
    string s1,s2;
    //cin>>s1>>s2;
    getline(cin,s1);
    getline(cin,s2);
    if(isAnagram(s1,s2))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
} 