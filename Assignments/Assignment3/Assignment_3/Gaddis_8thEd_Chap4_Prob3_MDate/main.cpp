/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 13, 2018, 12:30 PM
 * Purpose: Magic Date
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
      short month,year,day,smMthDy;
      
    //Initial Variables
      cout<<"Enter a Month (in number form) -> ";
      cin>>month;
      cout<<"Enter a Day (in number form) -> ";
      cin>>day;
      cout<<"Enter a Year (in number form) -> ";
      cin>>year;
    
    //Map/Process Inputs to Outputs
      smMthDy=month*day;
    
    //Display Outputs
    if (year==smMthDy)cout<<"Date is magic"<<endl;
      else cout<<"Date is not magic"<<endl;
    
    //Exit Program!
    return 0;
}

