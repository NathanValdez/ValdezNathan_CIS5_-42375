/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 10:30am
 * Purpose: To calculate minimum amount of insurance
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float Tcr; //total cost to replace
    float Ps; //Percentage suggested
    float Tis; //total insurance suggested

    Ps=.8;
    
cout<<"This program displays the minimum amount of insurance suggested"<<endl;  

cout<<"How much would it cost to replace your house in totality in dollars?"<<endl;
cin >> Tcr;

Tis=Tcr*Ps;

cout<<"You should get at least $"<<Tis<<" to cover your house"<<endl;
        

    
    return 0;
}

