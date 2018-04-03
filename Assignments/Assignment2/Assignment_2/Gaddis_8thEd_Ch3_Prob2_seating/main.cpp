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
    float a,      //The cost of an A class seat in dollars
          b,      //The cost of a B class seat in dollars
          c,      //The cost of a C class seat in dollars
          mnyA,   //The money earn form all the class A seats sold in dollar
          mnyB,   //The money earn from all the class B seats sold in dollar
          mnyC,   //The money earn form all the class C seats sold in dollar
          totl;   //The total money earn
    short int seatA, //the quantity of class A seats sold
              seatB, //the quantity of class B seats sold
              seatC; //the quantity of class C seats sold
    
    //Initial Variables
    a=15.00f;
    b=12.00f;
    c=9.00f;
    cout<<"How many seats where sold for class A?"<<endl;
    cin>>seatA;
    cout<<"How many seats where sold for class B?"<<endl;
    cin>>seatB;
    cout<<"How many seats where sold for class C?"<<endl;
    cin>>seatC;
    //Map/Process Inputs to Outputs
    mnyA=a*seatA;
    mnyB=b*seatB;
    mnyC=c*seatC;
    totl=mnyA+mnyB+mnyC;
    
    //Display Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"The cost of a class A seat = $"<<a<<endl;
    cout<<"The amount of class A seat sold = "<<seatA<<endl;
    cout<<"The money earn from class A seat = $"<<mnyA<<endl;
    cout<<"The cost of a class B seat = $"<<b<<endl;
    cout<<"The amount of class B seat sold = "<<seatB<<endl;
    cout<<"The money earn from class B seat = $"<<mnyB<<endl;
    cout<<"The cost of a class C seat = $"<<c<<endl;
    cout<<"The amount of class C seat sold = "<<seatC<<endl;
    cout<<"The money earn from class C seat = $"<<mnyC<<endl;
    cout<<"The total money earn = $"<<totl<<endl;
    //Exit Program!
    return 0;
}

