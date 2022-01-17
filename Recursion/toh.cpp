// void towerOfHanoi(int n, char from_rod,
//                     char to_rod, char aux_rod) 
// { 
//     if (n == 0) 
//     {
//         return; 
//     } 
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
//     cout << "Move disk " << n << " from rod " << from_rod <<
//                                 " to rod " << to_rod << endl; 
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
// } 
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char A,char B,char C){
    if(n==0)
    return;
    toh(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from rod "<<A<<" to rod "<<B<<endl;
    toh(n-1,C,B,A);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}