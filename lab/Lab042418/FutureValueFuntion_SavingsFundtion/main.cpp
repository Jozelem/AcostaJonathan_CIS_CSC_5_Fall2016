/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 24th, 2018, 11:26 AM
 * Purpose: Initial Savings Function
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <cmath>    //Math Library
#include <iomanip>  //Formatting Library
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const float CNVPERC=1e2f;//100
//Function Prototypes
float fval1(float,float,int); //Future Value with Power Function
float fval2(float,float,int); //Future Value with Log/Exp Function
float fval3(float,float,int); //Future Value with for -loop Function
float fval4(float,float,int); //Future Value by recursion
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float presVal,//Present value in $'s
          intRate;//Interest rate in %
    int   numCmp; //Number of compounding periods in years
    //Initial Variables
    presVal=1e2f;//$100's
    intRate=6;   //6 per cent
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = "<<intRate<<"%"<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Saving using FV -> power     = $"
            <<fval1(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Saving using FV -> Log/Exp   = $"
            <<fval2(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Saving using FV -> for -loop = $"
            <<fval3(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Saving using FV -> recursion = $"
            <<fval4(presVal,intRate/CNVPERC,numCmp)<<endl;
    
    
    //Exit Program!
    return 0;
}


//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                Future Value Function
//Inputs:
//  pv -> present Value in $'s
//  ir -> interest rate in decimal value
//  n  -> number of compounding periods (yrs)
//Outputs:
//  fv -> future value in $'s
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float fval1(float pv,float ir,int n){
    return pv*pow((1+ir),n);
    
}

float fval2(float pv,float ir,int n){
    return pv*exp(n*log(1+ir));
    
}

float fval3(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
       pv*=(1+ir);
    
    }
    return pv;
}

float fval4(float pv,float ir,int n){
    if(n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
    
}