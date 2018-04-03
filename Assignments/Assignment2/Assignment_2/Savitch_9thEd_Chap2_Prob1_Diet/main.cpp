/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 6, 2018, 12:20 PM
 * Purpose: 
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const float LBTOGRM=454.0f;//Pounds to Grams Conversion
const float DAYSYR=365.0f;//Days per years
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mMouse=35.0f,  //Mass of the mouse in grams
          mKllM=5.0f,    //Mass in sweetener to Kill The mouse
          mSoda=350.0f,   //Mass of Soda
          sodaCnc=.001f,  //Soda Concentration of sweetener
          wtDtr;          //Weight of the dieter in lbs      
    unsigned int numCans, //Number of cans to drink before death
            cCnsmd,        //Number of cans consumed
            cnsDay,       //Cans per Day
            numYrs;       //Number of years consuming soda
    
    //Initial Variables
    cout<<"This program calculates soda can consumption permitter"<<endl;
    cout<<"Input your final desired weight in lbs after diet soda consumption"<<endl;
    cin>>wtDtr;
    cout<<"Input how many cans you drink per day"<<endl;
    cin>>cnsDay;
    cout<<"Input how many years you have drank this soda"<<endl;
    cin>>numYrs;
            
    //Map/Process Inputs to Outputs
    numCans=mKllM*wtDtr*LBTOGRM/(mMouse*mSoda*sodaCnc)-1;
    cCnsmd=cnsDay*DAYSYR*numYrs;
    
    //Display Outputs
    cout<<"The weight of the dieter after soda consumption = "<<wtDtr<<endl;
    cout<<"Maximum cans of soda allowed to consume = "<<numCans<<endl;
    cout<<"Total cans of soda so far consumed = "<<cCnsmd<<endl;
    cout<<(cCnsmd<numCans?"You Live":"You have expired")<<endl;
    //Exit Program!
    return 0;
}

