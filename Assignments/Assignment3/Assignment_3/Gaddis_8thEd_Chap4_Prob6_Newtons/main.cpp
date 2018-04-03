/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on February 20, 2018, 9:21 AM
 * Purpose: This program will calculate the weight of an object form kilograms
 * newtons
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
    float wght,  //the weight of an object in kilograms
          nwts;  //the weight of an object in newtons
    
    //Initial Variables
    //Declaring the weight of the object
    cout<<"How much does the object weight in kilograms? ->";
    cin>>wght;
    
    //Map/Process Inputs to Outputs
    nwts=wght*9.8;
    
    //Display Outputs
    //setting the bounds of how much the object can weight
    if (nwts>1000)cout<<"The object is too heavy"<<endl;
    else if (nwts<10)cout<<"The object is too light"<<endl;
    else cout<<"The object weights "<<nwts<<" newtons"<<endl;
    
    //Exit Program!
    return 0;
}

