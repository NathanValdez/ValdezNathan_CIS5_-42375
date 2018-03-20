/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 8:39am
 * Purpose: To calculate total mpg
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
        //Declare Variables
    float Tag; //Total amount of gas
    float Tmd; //Total miles driven
    double Mpg; //Miles per gallon

         
    //Initialize Variables
    
   
    
    //Process/Map inputs to outputs
    
   
    //Output data
    cout<<"this program calculates the total MPG"<<endl;
    cout<<"How many gallons does your tank hold?";
    cin >> Tag;
    cout<<"How many miles were driven";
    cin >> Tmd;
    Mpg = Tmd/Tag;
    cout<<"The total miles per gallon = "<<Mpg<<"\n";
    
 
    //Exit stage right!
    return 0;
}

