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
    //Price of Car $'s, Down Payment %, 
    //Tax Rate %, Interest Rate %
    float prCr,dwnPy,taxRt,rgst,inRate;//Initial Conditions
    int nMonth;
    float lnBegM,inEdM,mthPay;
    //Initial Variables
    prCr=4.e4f;    //$40,000
    dwnPy=1e-1;    //10%
    taxRt=8e-2;    //8%
    rgst=2e-2;     //2% 
    nMonth=36;     //36 Months
    inRate=2e-2;   //2%
    lnBegM=prCr;
    mthPay=1,145.71;
    
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Month     Loan Amt Beg of Month    "
            "Interest End Month  Monthly Payment"<<endl;
    for(int nMonths=0;nMonths<=nMonth&&lnBegM<-1;nMonths++){
        cout<<setw(2)<<nMonths
                <<setw(12)<<lnBegM
                <<setw(10)<<inEdM
                <<setw(12)<<mthPay<<endl;
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