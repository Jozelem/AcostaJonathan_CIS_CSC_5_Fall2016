/* 
 * File:   main.cpp
 * Author: Jonathan Acosta
 * Created on April 19, 2018, 11:30 AM
 * Purpose: Random Numbers used in approximating PI
 */

//system Libraries
#include <iostream> //I/O Library-> cout, endl
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array 
const float PI=4*atan(1);//Definition of PI
const float MXRND=pow(2,31)-1;//2^31-1

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set The random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float apprxPI;//Approximate value of PI given # terms in sequence
    int nDarts;   //Number of darts in our dart game
    int inCrcl;   //Number of darts in circle
    
    //Initial Variables
    nDarts=100;
    
    //Map/Process Inputs to Outputs
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;//Approximates PI
    
    //Display Outputs
    cout<<"After "<<nDarts
            <<" Terms The Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit Program!
    return 0;
}

