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
    unsigned short x,y;
    char shape;       //f-> forward b->backward x->cross
    
    //Initial Variables
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Map/Process Inputs to Outputs
    y=x;
    for(int i;i<x;i++){
        if(shape='x'){
           cout<<y<<""<<y<<endl; 
           --y; 
        }
    }
    //Display Outputs
    
    
    //Exit Program!
    return 0;
}

