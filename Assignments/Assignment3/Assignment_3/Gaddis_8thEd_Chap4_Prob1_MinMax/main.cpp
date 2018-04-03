/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 13, 2018, 12:03 PM
 * Purpose: Determine the smallest and largest number
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
    short num1=0,num2=0;
    
    //Initial Variables
    cout<<"Enter two number (press enter after each) -> ";
    cin>>num1;
    cin>>num2;
    
    //Display Outputs
    if (num1>num2)cout<<num1<<" is larger"<<endl;
    else cout<<num2<<" is larger"<<endl;
    if (num1<num2)cout<<num1<<" is smaller"<<endl;
    else cout<<num2<<" is smaller"<<endl;
    
    //Exit Program!
    return 0;
}

