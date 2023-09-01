#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    const int MAX=20;
    int t = 1, n = 0, cost=0;
    int a[MAX];

    //cout << "Enter number of test cases\n";
    cin>>t;  // [1,20]

    for (int i=1; i<=t; i++) {

        //cout << "Enter array size and cost of chips\n";
        cin>>n; // [2,100]
        cin>>cost;

        //Enter dollar bill amounts
        for (int j = 0; j < n; j++) {
            cin >> a[j]; //[1,10^8]
            //cout<<a[j]<<" ";
        }


        // compare neighboring elements and then sort in ascending order
        string msg="NO";
        for (int k = 0; k < n - 1; k++) { // range [0,3]. a[k]. Think of this as the left side of comparison 
            for (int m = k + 1; m < n; m++) { //range [1,4]. a[m]. Think of this as the right side element 

                // compare neighbor elements, left to right
                if (a[k] + a[m]==cost) { // (0>1?), (1>2?), (2>3?), (3>4?)
                    msg="YES";
                }
            }
        }
        cout<<msg<<endl;
//        for (k = 0; k < n; k++) {
//            cout << a[k] << " ";
//        }
//        cout << endl;
    }

    return 0;
}