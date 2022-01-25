#include<bits/stdc++.h>
using namespace std;
string lcs(vector<string> v,int n){
    string str="";
    for(int i=0;i<v[0].size();i++){
        for(int j=1;j<n;j++){
            if(v[0][i]!=v[j][i])
            return str;
        }
        str+=v[0][i];
    }
    return str;
}
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    cout<<lcs(v,n);
    return 0;
}