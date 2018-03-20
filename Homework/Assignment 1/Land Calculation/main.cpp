/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 4, 2018 at 12:27pm
 * Purpose: Find Land Calculation
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
    int Acre; //Total of 1 acre of land per square feet
    int Totl; //Total amount of land
    float Tota; //TOtal amount of acres

         
    //Initialize Variables
    Acre=43560;
    Totl=389767;
   
    
    //Process/Map inputs to outputs
            Tota= Totl/Acre;
   
    //Output data
    cout<<"This program calculates the amount of acres in 389,767 square feet of land"<<endl;
    cout<<"Total amount of square feet in 1 acre = "<<Acre<<" square feet"<<endl;
    cout<<"Total amount of land = "<<Totl<<" square feet"<<endl;
    cout<<"Total amount of Acres = "<<Tota<<" acres"<<endl;
 
    //Exit stage right!
    return 0;
}

