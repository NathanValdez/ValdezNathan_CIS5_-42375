/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on march 11, 2018 at 10:30am
 * Purpose: To calculate amount spent on car annually and monthly
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float Loan; //Loan payment
    float Insurance; //Insurance payment
    float Gas; //Gas payment
    float Oil; //Oil payment
    float Tires; //Tire payment
    float Maintenance; //Maintenance payment
    float Tmp; //Total monthly payments made
    float Typ; //Total yearly payments made
    
    cout<<"This program displays the monthly and annual costs that are made towards your car"<<endl;
    
    cout<<"How much do you spend monthly on loan payments ";
    cin >> Loan;
    
    cout<<"How much do you spend monthly on insurance payments ";
    cin >> Insurance;
    
    cout<<"How much do you spend monthly on gas ";
    cin >> Gas;
    
    cout<<"How much do you spend monthly on oil? ";
    cin >> Oil;
    
    cout<<"How much do you spend monthly on Tires ";
    cin >> Tires;
    
    cout<<"How much do you spend monthly on maintenance ";
    cin >> Maintenance;
    
    Tmp = (Loan+Insurance+Gas+Oil+Tires+Maintenance);
    
    cout<<"Your monthly payments = $"<<Tmp<<endl;
    
    Typ = Tmp * 12;
    
    cout<<"Your yearly payments  = $"<<Typ<<endl;     
            
            
            
            
    
    return 0;
}

