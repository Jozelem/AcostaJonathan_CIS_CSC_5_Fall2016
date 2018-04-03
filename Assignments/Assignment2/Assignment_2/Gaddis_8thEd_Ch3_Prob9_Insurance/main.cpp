/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on February 8, 2018, 12:02 PM
 * Purpose: How Much Insurance
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>  //
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const int PERCENT=100; //conversion to percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float incPer=0.8f,  //minium amount of insurance percent to replace 
          costR,        //The cost needed to replace house of building in $
          minInc;       //Minimal amount that to replace house of building in $
    
    //Initial Variables
    cout<<"How much does your house of building cost to replace?"<<endl;
    cin>>costR;
    
    //Map/Process Inputs to Outputs
    minInc=costR*incPer;
    minInc=static_cast<int>((minInc+0.005f)*100)/100.0f;
    
    //Display Outputs
    cout<<"The minimal amount needed to replace your house/building = $"
            <<minInc<<endl;
    
    //Exit Program!
    return 0;
}

