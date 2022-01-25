#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int ma=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]>1){
                while(s[j]!=s[i])    
                 {
                     m[s[j]]--;          
                     j++;                 
                 }
                m[s[j]]--;          
                     j++; 
            }
            else{
                ma=max(ma,i-j+1);
            }
        }
        return ma;
    }
    int main(){
        string s;
        getline(cin,s);
        cout<<lengthOfLongestSubstring(s);
        return 0;
    }