/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on February 13, 2018, 12:05 AM
 * Purpose: CPP Template
 *          To be copy for every project
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
    short int cookies=30,  //The quantity of cookies per bag
              serving=10,  //there are 10 serving in a bag
              calPS=300,   //300 calories per serving
              cnsC;        //cookies consume
    float     cnsCal,      //calories consume
              ckPS,        //Cookies per Serving
              calPCk;      //Calories per cookie
    //Initial Variables
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cnsC;
    
    //Map/Process Inputs to Outputs
    ckPS=30/10;
    calPCk=calPS/ckPS;
    cnsCal=cnsC*calPCk;
    
    //Display Outputs
    cout<<"You ate "<<cnsC<<" Cookies "<<"witch is "<<cnsCal
            <<" Calories consume"<<endl;
    
    //Exit Program!
    return 0;
}

