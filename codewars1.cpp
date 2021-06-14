/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
string myFunction(int n){
    stringstream ss1, ss2;
    string s1,s2;
    int i1, i2;
    
    
    if(n%2!=0){
        
        i2 = (int)(n/2);
        i1 = i2 + 1;
        
        ss1<<i1*i1;
        ss1>>s1;
        ss2<<i2*i2;
        ss2>>s2;
    }
    else{
        return "Sorry, Not an Odd Number!";
    }
    
    return s1 + "-" + s2;
    
}
int main()
{
    //printf("Hello World");
    int n;
    cout<<"Enter a Number: \n";
    cin>>n;
    cout<<"\n";
    string s = myFunction(n);
    if(n%2 !=0){
    cout<<"Odd number as a difference of consecutive squares: \n";}
    cout <<"\"" <<s <<"\"" <<endl;
    return 0;
}



