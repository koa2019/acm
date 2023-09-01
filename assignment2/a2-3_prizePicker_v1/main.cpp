#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int t=1, n=2, max1=0, max2=0;
    

    //cout << "Enter number of test cases\n";
    cin>>t;  //[1,10]

    for (int i=1; i<=t; i++) {

        //cout << "Enter array size\n";
        cin>>n; // number of items to choose from [2, 10^5]
        
        int *a = new int[n];
        
        //Enter cost of each item
        for (int j = 0; j < n; j++) {
            cin>>a[j]; //[1,10^8]
        }


        // selection sort
        int minIndex, temp=0;
        for(int i=0; i<n-1; i++) { // range [0,n-2]
            minIndex=i;
            for(int j=i+1; j<n; j++) { //range [1,n] 
                
                if (a[j]<a[minIndex]) { // (i+1<min)
                    minIndex=j;                    
                }
            }
            //swap found min element with 1st element
            temp=a[minIndex];
            a[minIndex]=a[i];
            a[i]=temp;
        }
        max1=a[n-1];
        max2=a[n-2];
        cout<<max1+max2<<endl;
        
        delete []a;
    }
    return 0;
}