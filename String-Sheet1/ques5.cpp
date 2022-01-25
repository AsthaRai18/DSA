#include<bits/stdc++.h>
using namespace std;
void permutation(vector<string> &v,string str,int s,int e){
    if(s==e)
        v.push_back(str);
    else{
            for(int i=s;i<=e;i++){
                swap(str[s],str[i]);
                permutation(v,str,s+1,e);
                swap(str[s],str[i]);
            }
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.size()-1;
    vector<string> v;
    permutation(v,s,0,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    return 0;
}