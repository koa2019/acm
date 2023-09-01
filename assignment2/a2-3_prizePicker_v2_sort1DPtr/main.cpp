#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {

    int t=1, n=2, max1=0, max2=0;
    
    int *a=nullptr;
    
    //cout << "Enter number of test cases\n";
    cin>>t;  //[1,10]

    for (int i=1; i<=t; i++) {

        //cout << "Enter array size\n";
        cin>>n; // number of items to choose from [2, 10^5]
        
        a = new int[n];
        
        //Enter cost of each item
        for (int j = 0; j < n; j++) {
            cin>>a[j]; //[1,10^8]
        }    

        sort(a,a+n);        
        max1=a[n-1];
        max2=a[n-2];
        cout<<max1+max2<<endl;
    }
    delete []a;    
    return 0;
}