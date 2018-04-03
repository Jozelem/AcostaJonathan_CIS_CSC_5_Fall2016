/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 6, 2018, 11:05 AM
 * Purpose: Miles per Gallon
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mile,   //The miles the care runs on a full tank
          gallon, //the gallons of gas the car can take
          mGall;  //miles per gallon
    
    //Initial Variables
     cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>gallon;
    cout<<"How many miles can your car go on a full tank?"<<endl;
    cin>>mile;
    //Map/Process Inputs to Outputs
    mGall=mile/gallon;
    
    //Display Outputs
    cout<<"The amount of gallons that your car can hold = "<<gallon<<endl;
    cout<<"The amount of miles your car can go on a full tank = "<<mile<<endl;
    cout<<"The miles per gallon = "<<mGall<<endl;
    
    //Exit Program!
    return 0;
}

