/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 24th, 2018, 12:2 AM
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
const int DOLRSPN=100;//Conversion form dollar to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Function Prototypes
int numCoin(int,int);//Calculates number of coins
int rmnder(int,int); //Remainder after subtracting once

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price,amtTndr;
    int pennies,n25,n10,n5,n1;
    //Initial Variables
    price=9.14f;//Price is $9.14
    amtTndr=10.00f;//Amount Paid
    
    //Output initial conditions
    pennies=(amtTndr-price+0.005)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount Tenders  = $"<<amtTndr<<endl;
    cout<<"Change returned = "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    n25=numCoin(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmnder(pennies,PENNY);
    //Output data
    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes    = "<<n10<<endl;
    cout<<"Number of Nickels  = "<<n5<<endl;
    cout<<"Number of Pennies  = "<<n1<<endl;
    //Exit Program!
    return 0;
}

int rmnder(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}

int numCoin(int pennies,int denom){
    return pennies/denom;//number of coins of that denomination
}
