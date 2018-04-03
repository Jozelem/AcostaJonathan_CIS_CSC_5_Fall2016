/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 29, 2018, 10:18 AM
 * Purpose: Stick Purchase
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <iomanip>  //Format
#include <cstdlib>  //Rand function

using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //initialize the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk; //shock price  $ num/den
    int numShrs; //number of shares
    float valStks; //Value of the stocks in $'s
    char again; //continue or not
    
    //Initial Variables
    denStk=8;
    
    //Map/Process Inputs to Outputs
    do{
        //Randomly choose the stock price
        dolStk=rand()%1000; //[0-999]
        numStk=rand()%8; //[0-7]/8
        numShrs=rand()%90+10; //[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk)/denStk);
    
        //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The number of shares of stock = "<<numShrs<<endl;
        cout<<"The value of the stock/share = $"<<dolStk<<" "<<numStk<<"/"
                <<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStks<<endl;
        
        //Prompt the user to see if you want to continue
        cout<<endl<<"Would you like to continue Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');
    
    //Exit Program!
    return 0;
}

