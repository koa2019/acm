#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char** argv) {

    int t=6, n=2;
    vector<string> v = {"james123","sebastian609","james123","garlic3","james123","sebastian609"};
    vector<string> list;
    vector<string>::iterator itr;
    
    //cout<<"Enter number of names\n";
    cin>>t;  //[1,10] Enter number of test cases    
    string a[t]={};
    string str="", msg=""; 
    
    for(int i=0; i<t; i++) {
        //cout<<"Enter a name\n";
        cin>>str;
        //str=v[i];
        
        for(int j=0;j<=i;j++){
            
            //cout<<"i="<<i<<" j="<<j<<"  "<<str<<"=="<<a[j]<<"  ";
            
            if(str.compare(a[j])==0){ // strings are equal
                msg="YES\n";
                break;
            } else { 
                if(j==i){a[i]=str;}  
                msg="NO\n";
            }                 
        }
        cout<<msg;        
    }
    return 0;
}

//    for(int i=0; i<t; i++) {
//        
//        string str="";
//        //cout<<"Enter a name\n";
//        //cin>>str;
//        
//        list.push_back(str);
//        for(int i=0; i<list.size();i++){
//            
//            cout<<i<<" "<<list[i]<<" ";
//            
//            itr = find(list.begin(),list.end(),list[i]);
//            
//            if(itr != list.end()){ // if name is found
//                cout<<"YES\n";
//            } else { cout<<"NO\n"; }     
//        }             
//    }   