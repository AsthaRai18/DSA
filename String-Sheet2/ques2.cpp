#include<bits/stdc++.h>
using namespace std;
void paran(vector<string> &v,int i,int j,string s,int n){
        if(i>n||j>n||j>i){
            return;
        }
        if(i==n&&j==n){
            v.push_back(s);
        }
        paran(v,i+1,j,s+"(",n);
        paran(v,i,j+1,s+")",n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        paran(v,0,0,"",n);
        return v;
    }
int main(){
    int n;
    cin>>n;
    vector<string> v;
    v=generateParenthesis(n);
    for(auto i:v){
        cout<<i<<"   ";
    }
}