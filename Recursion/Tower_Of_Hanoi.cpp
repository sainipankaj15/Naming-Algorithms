// Problem link 
// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#


Solution :

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void TOF(int N, int a , int c , int b ){
        if(N==0)
        return ;
        TOF(N-1,a,b,c);
        cout<<"move disk "<<N<<" from rod "<<a<<" to rod "<<c<<endl;
        TOF(N-1,b,c,a);
    }
    
    public:
    long long toh(int N, int from, int to, int aux) {
        TOF(N,1,3,2);
        long long ans = pow(2,N)-1;
        return ans;
    }

};



int main() {

    int T;
    cin >> T;
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

//Just aware points of "from" "to" and "axu"
// in hindi 
// kon kaha se nikal kar kaha ja raha h wo dhayan rakhna h bas