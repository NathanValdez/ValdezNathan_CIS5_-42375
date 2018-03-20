/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 11:17am
 * Purpose: to convert dollars to other currencies
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() 
{
    float US;
    float Dpy; //conversion of yen to dollars or vice versa
    float Yen;
    float Dpe; //Conversion of Euros to dollars or vice versa
    float Euros;
    
    Dpy=83.14;
    Dpe=.7337;
    
    cout<<"this program converts dollars to Yen and Euros"<<endl;
    
    cout<<"How many dollars do you have?";
    cin>> US;
    
    cout<<"1 dollar = "<<Dpy<<" yen per dollar"<<endl;
    cout<<"1 dollar = "<<Dpe<<" euros per dollar"<<endl;
    
    Yen = US * Dpy;
    Euros = US * Dpe;
    
    cout<<"You have "<<Yen<<" yen per dollar"<<endl;
    cout<<"You have "<< setprecision(4)<<Euros<<" euros per dollar"<<endl;
            
    
    
    
    
            
            
    
    return 0;
}

