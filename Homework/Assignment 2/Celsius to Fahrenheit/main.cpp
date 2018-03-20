/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 10:45am
 * Purpose: Covert Fahrenheit to celsius
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float Celsius;
    float Fahrenheit;
    
    cout<<"this program converts celsius temperature to farhenheit temperature"<<endl;
    
    cout<<"What is the Temperature in celsius? ";
    cin>> Celsius;
    
    Fahrenheit = ((1.8*Celsius)+32); //if you do 9/5 the equation doesn't work but when you convert it yourself the equation works????????????????????????
    
    cout<<"th temperature =  " <<Fahrenheit<<" Fahrenheit"<<endl;    
    
            
            
    
    return 0;
}

