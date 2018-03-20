/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on February 24, 2018 6:35pm
 * Purpose: to calculate the total amount of a purchase
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
    float Pi1; //Price of Item 1
    float Pi2; //Price of Item 2
    float Pi3; //Price of Item 3
    float Pi4; //Price of Item 4
    float Pi5; //Price of Item 5
    float Sos; //Subtotal of Sale
    float Ast; //Amount of Sales Tax converted to decimal point
    float Tot; //Total amount
    float Const; //Converted back to percentage of sales tax

         
    //Initialize Variables
    Pi1=12.95;
    Pi2=24.95;
    Pi3=6.95;
    Pi4=14.95;
    Pi5=3.95;
    Ast=.06;
    
    //Process/Map inputs to outputs
     Sos=Pi1+Pi2+Pi3+Pi4+Pi5;
    Tot=(Sos*Ast)+Sos;
    Const=Ast*100;
   
    //Output data
    cout<<"This program calculates the total amount of the purchase"<<endl;
    cout<<"Price of Item 1 = $"<<Pi1<<endl;
    cout<<"Price of Item 2 = $"<<Pi2<<endl;
    cout<<"Price of Item 3 = $"<<Pi3<<endl;
    cout<<"Price of Item 4 = $"<<Pi4<<endl;
    cout<<"Price of Item 5 = $"<<Pi5<<endl;
    cout<<"Amount of Sales tax = %"<<Const<<endl; //converted back to percentage
    cout<<"Sub Total = $"<<Sos<<endl;
    cout<<"Total Amount = $"<<Tot<<endl;
    //Exit stage right!
    return 0;
}

