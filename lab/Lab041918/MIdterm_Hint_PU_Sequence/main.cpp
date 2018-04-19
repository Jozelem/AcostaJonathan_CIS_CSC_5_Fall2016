/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 19, 2018, 11:30 AM
 * Purpose: Sequence calculating PI
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <cmath>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const float PI=4*atan(1);//Definition of PI

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;//Approximate value of PI given # terms in sequence
    int nTerms;   //Number of terms used in sequence
    
    //Initial Variables
    apprxPI=0;
    nTerms=100;
    
    //Map/Process Inputs to Outputs
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;//flip the sign
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//Approximates PI
    
    //Display Outputs
    cout<<"After "<<nTerms
            <<" Terms The Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit Program!
    return 0;
}

