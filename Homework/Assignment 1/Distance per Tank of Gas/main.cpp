/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on February 24, 2018 6:35pm
 * Purpose: To Calculate the Distance per tank of Gas
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
    float Tag; //Total amount of gas
    float Mpgt; //MPG in town
    float Mpgh; //MPG on highway
    float D1; //Distance driven if using town MPG
    float D2; //Distance driven if using highway MPG

         
    //Initialize Variables
    Tag=20;
    Mpgt=21.5;
    Mpgh=26.8;
            
   
    
    //Process/Map inputs to outputs
    D1=Tag*Mpgt;
    D2=Tag*Mpgh;
            
   
    //Output data
    cout<<"This program determines the miles driven on one tank of gas Using the Town MPG and the Highway MPG"<<endl;
    cout<<"Total gallons of gas in the tank = "<<Tag<<" gallons"<<endl;
    cout<<"MPG in town = "<<Mpgt<<" MGP"<<endl;
    cout<<"MPG on highway = "<<Mpgh<<" MPG"<<endl;
    cout<<"Total miles driven on town MPG = "<<D1<<" miles"<<endl;
    cout<<"Total miles driven on highway MPG = "<<D2<<" miles"<<endl;
 
    //Exit stage right!
    return 0;
}

