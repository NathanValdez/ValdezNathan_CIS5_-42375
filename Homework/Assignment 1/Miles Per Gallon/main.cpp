/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 3, 2018 at 11:41 pm
 * Purpose: To Calculate the Miles Per Gallon
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
        //Declare Variables
    int Tgg; // Total gallons of gasoline in the car;
    int Tmd;//Total miles driven before refueling;
    int Mpg; // Miles per gallon;
                     
    //Initialize Variables
    Tgg= 12;
    Tmd= 350;
    
    
    //Process/Map inputs to outputs
    Mpg=Tmd/Tgg;
    
    //Output data
    cout<<"This Program calculates miles per gallon"<<endl;
    cout<<"miles traveled = "<<Tmd<<endl;
    cout<<"Total gallons of gas ="<<Tgg<<endl;
    cout<<"Miles per Gallon = "<<Mpg<<endl;
            
 
   
    //Exit stage right!
    return 0;
}

