/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 08, 2018, 9:31 AM
 * Purpose: Calculate the percentage of male and females in a class
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <cmath>    //Power funtion
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const int PERCENT=100; //Conversion to Percentage

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float i=0.01f,  //Interest rate per month 1%
          totAmt,   //Amount paid back in $
          totInt,   //Interest Paid in $
          mp,       //Monthly Payment in $
          loan;     //The loan amount in $
    int n;          //number of payment 
    
    //Initial Variables
    cout<<"How big was your loan?"<<endl;
    cin>>loan;
    cout<<"How many payments are you going to be making?"<<endl;
    cin>>n;
    
    //Map/Process Inputs to Outputs
    float temp=pow((1+i),n);
    mp=i*temp*loan/(temp-1);
    mp=static_cast<int>((mp+0.005f)*100)/100.0f;
    totAmt=n*mp;
    totInt=totAmt-loan;

    
    //Display Outputs
    cout<<"Loan Amount: $"<<loan<<endl;
    cout<<"Monthly Interest Rate: "<<i*PERCENT<<"%"<<endl;
    cout<<"Number of Payments: "<<n<<endl;
    cout<<"Monthly Payment: $"<<mp<<endl;
    cout<<"Amount Paid Back: $"<<totAmt<<endl;
    cout<<"Interest Paid: $"<<totInt<<endl;
    
    //Exit Program!
    return 0;
}

