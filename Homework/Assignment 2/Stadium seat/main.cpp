/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 11:19am
 * Purpose: To calculate amount of $ earned through ticket sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    int ClassA; //ClassA tickets price
    int Cas; //OTtal A tickets sold
    int ClassB; //ClassB tickets price
    int Cab; //total C tickets sold
    int ClassC; //ClassC tickets  price
    int Cac; //Total C tickets sold
    double Tme; //Total money earned
    
    ClassA = 15;
    ClassB = 12;
    ClassC = 9;
    
    cout<<"This program calculates the total amount of money made off of ticket prices"<<endl;
    
    cout<<"ClassA tickets = $"<<ClassA<<endl;
    cout<<"ClassB tickets = $"<<ClassB<<endl;
    cout<<"ClassC tickets = $"<<ClassC<<endl;
    
    cout<<"How many ClassA tickets did you buy?";
    cin >> Cas;
    
    cout<<"How many ClassB tickets did you buy?";
    cin>> Cab;
    
    cout<<"How many ClassC tickets did you buy?";
    cin >> Cac;
    
    Tme = ((Cas*ClassA)+(Cab*ClassB)+(Cac*ClassC));
    
    cout<<"The total amount earned from tickets = $"<<setprecision(4)<<Tme<<endl;
            
    
    
    
    return 0;
}

