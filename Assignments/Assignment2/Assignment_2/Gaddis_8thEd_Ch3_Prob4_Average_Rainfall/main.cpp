/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 08, 2018, 9:18 AM
 * Purpose: Calculating the average rainfall
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
    string month1,   //first month
           month2,   //second month
           month3;   //third month
    float mRain1,    //rain for first month in inches
          mRain2,    //rain for fist month in inches
          mRain3,    //rain for first month in inches
          avgRn;     //average rain in total for all months in inches
    //Initial Variables
    cout<<"Enter three month (after each month press enter before entering a new"
            "month"<<endl;
    cin>>month1;
    cin>>month2;
    cin>>month3;
    cout<<"Enter the average rainfall for each month (Remember to input the "
            "average rainfall in the order you input the month and press enter "
            "after each one"<<endl;
    cin>>mRain1;
    cin>>mRain2;
    cin>>mRain3;
    
    //Map/Process Inputs to Outputs
    avgRn=(mRain1+mRain2+mRain3)/3;
    
    //Display Outputs
    cout<<"In month "<<month1<<" the average rainfall was "<<mRain1<<" inches"<<endl;
    cout<<"In month "<<month2<<" the average rainfall was "<<mRain2<<" inches"<<endl;
    cout<<"In month "<<month3<<" the average rainfall was "<<mRain3<<" inches"<<endl;
    cout<<"The average rainfall from "<<month1<<", "<<month2<<", and "<<month3
            <<"is "<<avgRn<<" inches"<<endl;
    //Exit Program!
    return 0;
}

