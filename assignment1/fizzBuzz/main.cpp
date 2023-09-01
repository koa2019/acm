/* 
 * File:    main.cpp
 * Author:  Danielle F
 * Created: 08-24-2023 @ 10 PM
 * Purpose:  fizz buzz
 * Fizzbuzz is a popular children's game where your goal is to count from 1 to 𝑛. 
 * The catch is that if the number is a multiple of 3, instead of saying the regular number, 
 * you say Fizz, if the number is a multiple of 5, you say Buzz, 
 * and if the number is a multiple of both 3 and 5, you say FizzBuzz. 
 * You can't be bothered to actually play the game yourself, so you decide to write a program that does it for you!

Input:
The online input contains 𝑛 (1 ≤ 𝑛 ≤ 105).

Output:
Simply output all numbers from 1 to 𝑛 with the rules specified by the game.
 
 * input: 6
 * output: 
1
2
Fizz
4
Buzz
Fizz
 */

//System Libraries
#include <iomanip>  //setw()
#include <cstdlib> // rand()
#include <ctime>   // time()
#include <string> //string
#include <cstring> //c-strings
#include <cctype> // tolower()
#include <sstream>    // stringstream. int to string
#include <iostream>  //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

int main(int argc, char** argv) {
    
    //Declare variables here
    int n=1;
    
    //cout<<"Input n\n";
    cin>>n;   
    
    //Map inputs to outputs here, i.e. the process   
    string msg="";
    for(int i=1; i<=n; i++){
        msg = (i%3==0 && i%5==0) ? "FizzBuzz" :
              (i%3==0) ? "Fizz" :
              (i%5==0) ? "Buzz" : to_string(i);
        cout<<msg<<endl;
    }    
    return 0;
}