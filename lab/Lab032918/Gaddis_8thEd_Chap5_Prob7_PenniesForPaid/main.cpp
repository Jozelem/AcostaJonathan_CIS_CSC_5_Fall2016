/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 29, 2018, 12:05 AM
 * Purpose: Pennies for pay
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
    unsigned int totPay,pyPrDay; //pennies of pay
    char numDays=31; //Most number of days in Month
    //Initial Variables
    totPay=0;  //total amount
    pyPrDay=1; //1 pennis of pay
            
    //Map/Process Inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day       Pay          Total"<<endl;
    for(int day=1;day<=numDays;day++) {
        cout<<setw(2)<<day<<setw(12)<<pyPrDay/100.0f<<setw(14)
                <<totPay/100.0f<<endl;
        pyPrDay*=2;
        totPay+=pyPrDay;
    }
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

