/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on May 3rd, 2018, 11:42 AM
 * Purpose: Retirement
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>  //Format Library
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //Salary in $/year, Return on Investment in %, 
    //Savings required in $, Percentage Deposit in %
    float salary,roi,savReq,percDep;//Initial Conditions
    int nYears;
    float svBegYr,inEndYr,dpEndYr;
    //Initial Variables
    salary=1.e5f;//$100,000
    roi=5e-2;    //5%
    savReq=salary/roi;
    percDep=1e-1f;//10% 
    nYears=50;         //50 years
    svBegYr=0;         //NO Savings int $'s at start
    inEndYr=0;         //No interest at the beginning
    dpEndYr=percDep*salary; //Deposit at the end of every year
    
    //Map/Process Inputs to Outputs
    int year=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year     Savings    Interest  Deposit"<<endl;
    for(int nYear=0;nYear<=nYears&&savReq>svBegYr;nYear++,year++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year
                <<setw(12)<<svBegYr
                <<setw(10)<<inEndYr
                <<setw(12)<<dpEndYr<<endl;
        int isvBgYr=(svBegYr+inEndYr+dpEndYr)*100;//Calculates in Pennies
        svBegYr=isvBgYr/100;//Shifts back to dollars
        inEndYr=svBegYr*roi;
    }
    cout<<"Savings to Retire = $"<<svBegYr
            <<" in year "<<year<<endl;
    //Display Outputs
    
    //Exit Program!
    return 0;
}