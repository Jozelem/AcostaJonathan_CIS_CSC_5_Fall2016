/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 27, 2018, 9:20 AM
 * Purpose: Will sum numbers using a loop
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
    int intVlu, //A positive integer value
        sum;

    //Initial Variables
    intVlu=0;
    //Enter the value that will determent how many number will be sum
    do{
       cout<<"Enter a positive integer value"<<endl;
       cin>>intVlu;
    }while(intVlu<1);
    
    //Map/Process Inputs to Outputs
    //adding all the number upto the number input
    for(int i=0; i<=intVlu; i++){
        int a=1;
        a=i;
        sum+=a;
    }
    //Display Outputs
    cout<<"The sum of numbers = "<<sum<<endl;
    
    //Exit Program!
    return 0;
}

