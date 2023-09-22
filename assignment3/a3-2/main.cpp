#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    int t=6, n=2;
    string str="", msg=""; 
    vector<string> v = {"james123","sebastian609","james123","garlic3","james123","sebastian609"};
    //vector<string> list;
    //vector<string>::iterator itr;
    
    //cout<<"Enter number of names\n";
    cin>>t;  //[5,20] Enter number of test cases   
   
    
    // Initialize arrays
    string nameList[t]={};
    int count[t]={};
    for(int i=0; i<t; i++) {
        nameList[i]="";
        count[i]=0;
    }
    for(int i=0; i<t; i++) {//Loop t times
        
        //cout<<"Enter a name\n";
        //str=v[i]; // For testing purposes
        cin>>str;
        
        int j;
        for(j=0;j<=i;j++){// Loops through the names array to look for current str
            
            //cout<<"i="<<i<<" j="<<j<<"  "<<str<<"=="<<a[j]<<"  ";
            
            if(str.compare(nameList[j])==0){ // Strings are equal               
                count[j]++; // Increment how many times this name was found
                msg="YES";
                //cout<<"i="<<i<<" "<<str<<" count["<<j<<"]="<<count[j]<<" ";
                break;
            } else { 
                if(j==i){ // Current nameList element = current name inputted         
                    nameList[i]=str; // Save current name to array
                    count[i]++; // Increment this name's count to 1
                    //cout<<"i="<<i<<" "<<str<<" count="<<count[i]<<" ";
                }  
                msg="NO\n";
            }                 
        }
        cout<<msg;
        if(msg=="YES"){cout<<" "<<count[j]<<endl;}       
    }
    return 0;
}