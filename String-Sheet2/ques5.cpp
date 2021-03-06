#include<bits/stdc++.h>
using namespace std;
 string longestPalindrome(string str) {
        string ans;
        int max_len = 0;
        int start, end;
        for(int i=0;i<str.length();i++){
            int l = i, r = i;
            while(l>=0 && r<str.length() && str[l]==str[r]){
                if((r-l+1) > max_len){
                    start = l;
                    max_len = r-l+1;
                }
                l--;r++;
            }
            l = i; r = i+1;
            while(l>=0 && r<str.length() && str[l]==str[r]){
                if((r-l+1) > max_len){
                    start = l;
                    max_len = r-l+1;
                }
                l--;r++;
            }
        }
        return str.substr(start, max_len);
    }
int main(){
    string s;
    getline(cin,s);
    cout<<longestPalindrome(s);
}