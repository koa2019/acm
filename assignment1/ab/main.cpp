/* 
 * File:    main.cpp
 * Author:  Danielle F
 * Created: 08-24-2023 @ 10 PM
 * Purpose:  
 * You are given two integers 𝑎 and 𝑏. Print 𝑎+𝑏

Input

The only line of the input contains integers 𝑎
and 𝑏 (−100≤𝑎,𝑏≤100
 a <= -100

Output:
Print 𝑎+𝑏
 */

//System Libraries
#include <iomanip>  //setw()
#include <cstdlib> // rand()
#include <ctime>   // time()
#include <string> //string
#include <cstring> //c-strings
#include <cctype> // tolower()
#include <iostream>  //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

int main(int argc, char** argv) {
    int a,b;
    a=b=0;
    cin>>a;
    cin>>b;
    cout<<a+b;
    return 0;
}