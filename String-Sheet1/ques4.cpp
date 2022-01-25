#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    
}
int main(){
    string s;
    cin>>s;
    reverseString(s);
    cout<<s;
    return 0;
}