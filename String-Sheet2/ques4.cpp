#include<bits/stdc++.h>
using namespace std;
bool static mycomp(int a, int b)
    {
        string x=to_string(a);
        string y=to_string(b);
        return x+y>y+x;
    }
    
    string largestNumber(vector<int>& nums) 
    {
        string res="";
        sort(nums.begin(), nums.end(), mycomp);
        for(int i=0; i<nums.size(); i++)
            res+=to_string(nums[i]);
        
        return res[0]=='0'?"0":res; 
    }
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cout<<largestNumber(v);
}