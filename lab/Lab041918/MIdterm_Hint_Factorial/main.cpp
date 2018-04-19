/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 19, 2018, 11:30 AM
 * Purpose: Calculate a Factorial
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
    int n,fctrl;
    
    //Initial Variables
    fctrl=1;
    n=6;
    
    //Map/Process Inputs to Outputs
    for(int i=1;i<=n;i++){
        fctrl*=i;
        
    }
    //Display Outputs
    cout<<n<<"! = "<<fctrl<<endl;
    
    //Exit Program!
    return 0;
}

