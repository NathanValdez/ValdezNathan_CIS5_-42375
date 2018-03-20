/* 
 * File:   main.cpp
 * Author: Nathan Valdez
 * Created on March 11, 2018 at 8:39am
 * Purpose: To calculate average test scores
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    double test1, test2, test3; //scores of tests
    double average; //toal score added then divided by 3
    
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score";
    cin >> test2;
    cout << "Enter the third test score";
    cin >> test3;
    
    average = (test1 + test2 + test3)/3.0;
    
    cout << "The average score = " << average << endl;
 
    //Exit stage right!
    return 0;
}

