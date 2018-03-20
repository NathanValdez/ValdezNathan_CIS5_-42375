/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11,2018 at 11:19am
 * Purpose: to calculate how many widgets per pallet 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float Pallets; //Total weight of pallet
    float Widgets; //Total amount of widgets
    float Pounds; //Weight of widget
    float Pounds2; //WEight of pallet with widgets
    
    Pounds=9.2;
    
    cout<<"this program displays the total amount of widgets stacked on a pallet"<<endl;
    cout<<"The total weight of a widget = "<<Pounds<<endl;
    cout<<"What is the total weight of the pallet?";
    cin>>Pallets;
    cout<<"What is the total wight of the pallet with widgets on it?";
    cin>>Pounds2;
            
    
    Widgets=(Pounds2-Pallets)/Pounds;
    
    cout<<"The total amount of widgets on the pallet = "<<Widgets<<endl;
    
    
            
            
    
    return 0;
}

