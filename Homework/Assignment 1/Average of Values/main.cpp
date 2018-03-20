/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 4,2018 at 6:07am
 * Purpose: To Find the Average of 5 Numbers
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
    int N3; //Third Value
    int N4; //Fourth Value
    int N5; //Fifth Value
    int Ton; //Total number after addition
    int Aov; //Average of Values
    

         
    //Initialize Variables
    N1=28;
    N2=32;
    N3=37;
    N4=24;
    N5=33;
            
   
    
    //Process/Map inputs to outputs
            Ton=N1+N2+N3+N4+N5;
            Aov=Ton/5;
   
    //Output data
            cout<<"This program calculates the average of 5 values"<<endl;
            cout<<"First Value = "<<N1<<endl;
            cout<<"Second Value = "<<N2<<endl;
            cout<<"Third Value = "<<N3<<endl;
            cout<<"Fourth Value = "<<N4<<endl;
            cout<<"Fifth Value = "<<N5<<endl;
            cout<<"Sum of All Numbers = "<<Ton<<endl;
            cout<<"Average of Values = "<<Aov<<endl;
            
                    
 
    //Exit stage right!
    return 0;
}

