/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 4, 2018 at 6:42am
 * Purpose: To Calculate the Restaurant Bill and Tip
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
    float Tcm; //Total cost of meal
    float Tp; //Tax percentage converted to decimal point
    float St; //total amount in Tax
    float Tp2; //tax reconverted to percentage
    float Tip; //Tip percentage
    float Tip2; //Tip reconverted to percentage
    float At; //Actual Tip in $
    float Toc; //Total cost or everything
 

         
    //Initialize Variables
    Tcm=44.50;
    Tp=.0675;
    Tip=.15;
           
    
    //Process/Map inputs to outputs
    Tp2=Tp*100;
    At=.15*((Tcm*Tp)+Tcm);
    St=Tp*Tcm;
    Tip2=Tip*100;
    Toc=At+St+Tcm;
    
            
            
            
   
    //Output data
    cout<<"This program determines the total cost of tip and dinner at a restaurant"<<endl;
    cout<<"The total cost of the meal = $"<<Tcm<<endl;
    cout<<"The sales tax = %"<<Tp2<<" or $"<<St<<endl;
    cout<<"The recommended tip is = "<<Tip2<<" or $"<<At<<endl;
    cout<<"Your final bill would be = $"<<Toc<<endl;
 
    //Exit stage right!
    return 0;
}

