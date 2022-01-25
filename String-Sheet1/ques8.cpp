#include<bits/stdc++.h>
using namespace std;
int countWords(string s)
{
    //code here.
    int res = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]==' '||s[i]=='\\'||s[i+1]=='\0'){
            res++;
        }
        while(s[i]==' '&&i<s.size()){
            i++;
        }
    }
    
    return res;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    cout<<countWords(s1);
    
    return 0;
} 