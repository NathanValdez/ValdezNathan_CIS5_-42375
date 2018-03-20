/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 11:18am
 * Purpose: to calculate how many calories are being consumed
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int Tcb; //total cookies in bag
    int Tsb; //Total servings in bag
    int Tcs; //Total calories per serving
    int Tce; //Total cookies eaten
    int Tcp; //Total cookies per serving
    float Tcc; //total calories consumed
    
    Tcb=40;
    Tcp+4;
    Tsb=10;
    Tcs=300;
    
    cout<<"This program calculates the total amount of calories consumed"<<endl;
    cout<<"Total amount of cookies in one bag = "<<Tcb<<endl;
    cout<<"Total amount of servings in one bag = "<<Tsb<<endl;
    cout<<"Total amount of calories per serving = "<<Tcs<<endl;
    cout<<"How many cookies did you eat?";
    cin>>Tce;
    
    Tcc = (Tce/Tcp) * Tcs;
    cout<<"Total amount of calories eaten = "<<Tcc<<endl;
            
            
   
    return 0;
}

