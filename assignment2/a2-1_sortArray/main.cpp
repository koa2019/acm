#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int t = 1, n = 2;
    int a[20];

    //cout << "Enter number of test cases\n";
    cin>>t;

    for (int i = 1; i <= t; i++) {

        //cout << "Enter array size\n";
        cin>>n; //[1,20]


        //Enter array element
        for (int j = 0; j < n; j++) {
            cin >> a[j]; //[-100,100]
            //cout<<a[j]<<" ";
        }


        // compare neighboring elements and then sort in ascending order
        int k, temp = 0;
        for (k = 0; k < n - 1; k++) { // range [0,3]. a[k]. Think of this as the left side of comparison 
            for (int m = k + 1; m < n; m++) { //range [1,4]. a[m]. Think of this as the right side element 

                // compare neighbor elements, left to right
                if (a[k] > a[m]) { // (0>1?), (1>2?), (2>3?), (3>4?)
                    //swap
                    temp = a[k];
                    a[k] = a[m];
                    a[m] = temp;
                }
            }
        }

        for (k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }

    return 0;
}