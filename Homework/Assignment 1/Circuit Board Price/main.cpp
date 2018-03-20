/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on march 4, 2018 at 7:08am
 * Purpose: To calculate profit on selling circuit boards
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
    float Cp; //Company Profit
    float Cp1; //Total amount of profit in $
    float Cp2; //Company profit percentage reconverted to percentage
    float Cb; //Cost to produce Circuit Board
    float Sp; //total price of Circuit Board
    

         
    //Initialize Variables
    Cp=.4;
    Cb=12.67;
            
   
    
    //Process/Map inputs to outputs
    Cp2=Cp*100;
    Cp1=Cp*Cb;
    Sp=(Cp*Cb)+Cb;
            
   
    //Output data
    cout<<"This program determines company profit and the total cost of \ncircuit boards after profit is added"<<endl;
    cout<<"Total company profit = %"<<Cp2<<" or $"<<Cp1<<endl;
    cout<<"Total cost to produce circuit board = $"<<Cb<<endl;
    cout<<"Total cost to buy circuit board = $"<<Sp<<endl;
 
    //Exit stage right!
    return 0;
}

