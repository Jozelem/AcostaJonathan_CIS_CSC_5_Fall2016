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
    float test1,
          test2,
          test3,
          test4,
          test5,
          tstAvrg;
    
    //Initial Variables
    cout<<"Enter Five test scores (after each press enter)"<<endl;
    cin>>test1;
    cin>>test2;
    cin>>test3;
    cin>>test4;
    cin>>test5;
    
    //Map/Process Inputs to Outputs
    tstAvrg=(test1+test2+test3+test4+test5)/5;
    
    //Display Outputs
    cout<<setprecision(1)<<fixed;
    cout<<"The test scores you enter"<<endl;
    cout<<test1<<endl;
    cout<<test2<<endl;
    cout<<test3<<endl;
    cout<<test4<<endl;
    cout<<test5<<endl;
    cout<<"The Average test score is "<<tstAvrg<<endl;
    
    //Exit Program!
    return 0;
}

