/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 15, 2018, 9:24 AM
 * Purpose: Body Mass
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
    float BMI,   //Body Mass Index
          wght,  //Weight in pounds
          hght;  //Height in inches
    
    //Initial Variables
    cout<<"This program will tell you if you are underweight, overweight "
            "or have optima weight"<<endl;
    cout<<"Enter your weight in pounds -> ";
    cin>>wght;
    cout<<"Enter your height in inches -> ";
    cin>>hght;
    
    //Map/Process Inputs to Outputs
    BMI=(wght*703)/hght;
    
    //Display Outputs
    if (BMI>=18.5&&BMI<=25)cout<<"You have optimal weight"<<endl;
    else if (BMI<18.5)cout<<"You are underweight"<<endl;
    else if (BMI>25)cout<<"You are overweight"<<endl;
    
    //Exit Program!
    return 0;
}

