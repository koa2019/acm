#include <bits/stdc++.h>
using namespace std;
bool isPrime(int);

int main(int argc, char** argv) {

    int t=1, n=2;
    string msg="";
    //vector<int> a = {24, 43, 6, 991};
    
    //cout << "Enter number of test cases\n";
    cin>>t;  //[1,10]
 
    
    for(int i=1; i<=t; i++) {
        //cout << "Enter n\n";
        cin>>n; // current price of bitcoin [2, 10^10]   
        //n=a[i-1]; 
        msg = (isPrime(n)) ? "BUY" : "WAIT";
        cout<<msg<<endl;        
    }   
    return 0;
}

bool isPrime(int n){
    if(n==1 || n==0){return false;}
    for(int j=2; j<=(sqrt(n)+1); j++){
        if(n%j==0){return false;}         
    }
    return true;
}