/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 4, 2018 at 6:22am
 * Purpose: To Calculate Sales Tax
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
    float Tp; //Total price
    float Tt; //Total Tax
    int St; //Sub total
    float Sls; //Sales Tax 
    float Ct; //County Tax
    float Sls1; //Total amount of sales tax in $
    float Ct1; //Total amount of county tax in $
    float Sls2; //Sales Tax converted back to percentage
    float Ct2; //County tax converted back to percentage

             //Initialize Variables
    St=52;
    Sls=.04;
    Ct=.02;
        
    //Process/Map inputs to outputs
      Tp=(St*Sls)+(St*Ct)+St;
      Tt=(St*Sls)+(St*Ct);
      Sls1=(St*Sls);
      Ct1=(St*Ct);
      Sls2=Sls*100;
      Ct2=Ct*100;
    //Output data
      cout<<"This program determines the sales tax"<<endl;
      cout<<"The Subtotal = $"<<St<<endl;
      cout<<"The Sales Tax = %"<<Sls2<<" and the total = $"<<Sls1<<endl;
      cout<<"The County Tax = %"<<Ct2<<" and the total = $"<<Ct1<<endl;
      cout<<"The Total amount of Tax = $"<<Tt<<endl;
      cout<<"The Total Price = $"<<Tp<<endl; 
    //Exit stage right!
    return 0;
}

