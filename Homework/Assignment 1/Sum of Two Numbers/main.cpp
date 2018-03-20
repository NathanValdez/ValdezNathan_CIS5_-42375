/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March4, 2018 at 6:16am
 * Purpose: To Find the Sum of Two Numbers
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
    int N1; //First Value
    int N2; //Second Value
    int N3; //Sum of both numbers

         
    //Initialize Variables
    N1=62;
    N2=99;
   
    
    //Process/Map inputs to outputs
    N3=N1+N2;
   
    //Output data
    cout<<"This program determines the sum of two variables"<<endl;
    cout<<"The First Variable = "<<N1<<"\nThe Second Variable = "<<N2<<"\nThe Sum of both Variables = "<<N3<<endl; 
 
    //Exit stage right!
    return 0;
}

