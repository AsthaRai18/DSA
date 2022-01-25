#include<bits/stdc++.h>
using namespace std;
void revers(string &s,int i,int j){
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }
}
    string reverseWords(string s) {
         int n = s.size();
        int j=0;
    int i=0;
    while(i<s.size()){
    for(;i<s.size();i++){
        if(s[i]==' '){
            revers(s,j,i-1);
            j=i+1;
        }
        if(s[i+1]=='\0')
            revers(s,j,i);
    }
    }
        return s;}
int main(){
    string s,s1,str;
    cin>>s;
    cout<<reverseWords(s);
    return 0;
}