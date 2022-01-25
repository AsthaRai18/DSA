#include<bits/stdc++.h>
using namespace std;
string decodeTheString(string s, int &itr){
        string res = "";
        while(itr < s.size() && s[itr] != ']'){
            if(isdigit(s[itr])){
                int num = 0;
                while(itr < s.size() && isdigit(s[itr])){
                    num = num * 10 + (s[itr++] - '0');
                }
                itr++;
                
                string temp = decodeTheString(s, itr);
                itr++;
                while(num--){
                    res += temp;
                }
            }
            else{
                res += s[itr++];
            }
        }
        return res;    
    }
    
    string decodeString(string s) {
        int itr = 0;
        return decodeTheString(s, itr);
    }
int main(){
    string s;
    getline(cin,s);
    cout<<decodeString(s);
    return 0;
}