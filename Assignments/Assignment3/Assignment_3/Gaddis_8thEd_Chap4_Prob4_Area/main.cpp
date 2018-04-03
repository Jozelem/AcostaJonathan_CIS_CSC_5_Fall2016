/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 15, 2018, 9:24 AM
 * Purpose: Compering two areas of different rectangles
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
    short int rcLth1,  //Length of the first rectangle in cm
              rcWth1,  //Width of the first rectangle in cm
              rcLth2,  //Length of the second rectangle in cm
              rcWth2,  //Width of the second rectangle in cm
              area1,   //area of the first rectangle in cm^2
              area2;   //area of the second rectangle in cm^2
    
    //Initial Variables
    cout<<"Enter the length of the first rectangle in cm -> ";
    cin>>rcLth1;
    cout<<"The width in cm -> ";
    cin>>rcWth1;
    cout<<"Enter the length of the second rectangle in cm -> ";
    cin>>rcLth2;
    cout<<"the width in cm -> ";
    cin>>rcWth2;
    
    //Map/Process Inputs to Outputs
    area1=rcLth1*rcWth1;
    area2=rcLth2*rcWth2;
    
    //Display Outputs
    if (area1>area2)cout<<"The rectangle with greater area is "<<area1<<endl;
    else if(area1==area2)cout<<"The rectangle's areas are the same"<<endl; 
    else cout<<"The rectangle with greater area is "<<area2<<endl;
    
    //Exit Program!
    return 0;
}

