#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        int n=s.size()-1;
        string str="",s1="";
        int j=0,i=n;
        if(s[j]==' '){
            while(s[j]==' '&&j<=n)
                j++;
        }
        while(s[i]==' '&&i>=0)
                i--;
       for(;i>j;i--){
           if(s[i]!=' ')
               str+=s[i];
           else{
               
                reverse(str.begin(),str.end());
               s1+=str;
               s1+=' ';
               str="";
               while(s[i-1]==' '&&i>j)
                   i--;
           }
       }
        str+=s[i];
reverse(str.begin(),str.end());
               s1+=str;
         
        return s1;
    }
int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
}