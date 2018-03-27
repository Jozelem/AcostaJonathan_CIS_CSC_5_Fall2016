/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on March 27, 2018, 11:23 AM
 * Purpose: Clock
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <fstream>  //File Library
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    
    //Initial Variables
    out.open("Clock.out");
    
    //Map/Process Inputs to Outputs
    for(int hour=0;hour<=11;hour++){
        for(int min=0;min<=59;min++){
            for(int sec=0;sec<=59;sec++){
                         out<<hour<<":"
                            <<min<<":"
                            <<sec<<" AM"<<endl;
            }
        }
    }
     for(int hour=12;hour>=12;hour--){
        for(int min=0;min<=0;min++){
            for(int sec=0;sec<=0;sec++){
                        out<<hour<<":"
                            <<min<<":"
                            <<sec<<" PM"<<endl;
                        
                    
            }
        }
    }
    for(int hour=0;hour<=11;hour++){
        for(int min=0;min<=59;min++){
            for(int sec=1;sec<=59;sec++){
                        out<<hour<<":"
                            <<min<<":"
                            <<sec<<" PM"<<endl;
                        
                    
            }
        }
    }
    
    
    //Display Outputs
    out.close();
    
    //Exit Program!
    return 0;
}

