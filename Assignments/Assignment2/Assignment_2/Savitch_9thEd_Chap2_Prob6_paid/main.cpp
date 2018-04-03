/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 6, 2018, 11:11 AM
 * Purpose: Stadium Seating
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float paid,    //money paid for the first 40 hours
          wkHrs,   //Work hours
          grssPay, //Gross pay
          stTax,   //State Tax
          fedTax,  //Federal Tax
          sclSTax, //Social Security Tax
          unDues,  //Union Dues
          hlthIns,
          payChk;
    unsigned char depent;  //Number of Dependents
          
    
    //Initial Variables
    paid=16.78f;
    sclSTax=0.06f;
    fedTax=0.14f;
    stTax=0.05f;
    unDues=10.00f;
    cout<<"How many hours did your work?"<<endl;
    cin>>wkHrs;
    cout<<"Do you have any Dependents, if so how many (if none input 0)"<<endl;
    cin>>depent;
    
    //Map/Process Inputs to Outputs
    grssPay=wkHrs*paid;
    grssPay+=wkHrs>40?(paid-40)*paid/2:0;
    grssPay=static_cast<int>((grssPay+0.005f)*100)/100.0f;
    stTax*=grssPay;
    stTax=static_cast<int>((stTax+0.005f)*100)/100.0f;
    fedTax*=grssPay;
    fedTax=static_cast<int>((fedTax+0.005f)*100)/100.0f;
    sclSTax*=grssPay;
    sclSTax=static_cast<int>((sclSTax+0.005f)*100)/100.0f;
    hlthIns=depent>='3'?hlthIns:0;
    payChk=grssPay-stTax-fedTax-sclSTax-hlthIns-unDues;
    payChk=static_cast<int>((payChk+0.005f)*100)/100.0f;
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours Worked         =   "<<setw(7)<<wkHrs<<endl;
    cout<<"Number of Dependents =   "<<setw(4)<<depent<<endl;
    cout<<"Gross Pay            = $ "<<setw(7)<<grssPay<<endl;
    cout<<"Social Security      = $ "<<setw(7)<<sclSTax<<endl; 
    cout<<"Federal Tax          = $ "<<setw(7)<<fedTax<<endl;
    cout<<"State Tax            = $ "<<setw(7)<<stTax<<endl;
    cout<<"Health Insurance     = $ "<<setw(7)<<hlthIns<<endl;
    cout<<"Union Dues           = $ "<<setw(7)<<unDues<<endl;
    cout<<"Net Pay              = $ "<<setw(7)<<payChk<<endl;
    
    //Exit Program!
    return 0;
}

