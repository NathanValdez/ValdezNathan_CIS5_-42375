/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 11:06am
 * Purpose: Calculates the assessment value and property tax
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() 
{
    float Av; //Assessment value
    float Pav; //Properties actual value
    float Apt; //Actual property tax;
    
    cout<<"This program calculates the assessment value and porperty tax"<<endl;
    
    cout<<"What is the value of the property = ";
    cin >> Pav;
    
    Av=Pav*.6;
    cout<<"The assessment value of the property = "<<Av<<endl;
    
    Apt = Av * .0064;
    cout<<"The property Tax = $"<<setprecision(4)<<Apt<<endl;
    
    return 0;
}

